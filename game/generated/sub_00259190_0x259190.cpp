#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00259190
// Address: 0x259190 - 0x2592d0
void sub_00259190_0x259190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259190_0x259190");
#endif

    switch (ctx->pc) {
        case 0x2591e8u: goto label_2591e8;
        default: break;
    }

    ctx->pc = 0x259190u;

    // 0x259190: 0x8c8205b0  lw          $v0, 0x5B0($a0)
    ctx->pc = 0x259190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1456)));
    // 0x259194: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x259194u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259198: 0x8ca700c4  lw          $a3, 0xC4($a1)
    ctx->pc = 0x259198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x25919c: 0x8c8b05b8  lw          $t3, 0x5B8($a0)
    ctx->pc = 0x25919cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
    // 0x2591a0: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2591A0u;
    {
        const bool branch_taken_0x2591a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2591A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2591A0u;
        // 0x2591a4: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2591a0) {
            ctx->pc = 0x2592C8u;
            goto label_2592c8;
        }
    }
    ctx->pc = 0x2591A8u;
    // 0x2591a8: 0x90a201bb  lbu         $v0, 0x1BB($a1)
    ctx->pc = 0x2591a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 443)));
    // 0x2591ac: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2591ACu;
    {
        const bool branch_taken_0x2591ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2591ac) {
            ctx->pc = 0x2592C8u;
            goto label_2592c8;
        }
    }
    ctx->pc = 0x2591B4u;
    // 0x2591b4: 0x10680004  beq         $v1, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2591B4u;
    {
        const bool branch_taken_0x2591b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x2591B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2591B4u;
        // 0x2591b8: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2591b4) {
            ctx->pc = 0x2591C8u;
            goto label_2591c8;
        }
    }
    ctx->pc = 0x2591BCu;
    // 0x2591bc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2591bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2591c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2591C0u;
    {
        const bool branch_taken_0x2591c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2591C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2591C0u;
        // 0x2591c4: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2591c0) {
            ctx->pc = 0x2591D8u;
            goto label_2591d8;
        }
    }
    ctx->pc = 0x2591C8u;
label_2591c8:
    // 0x2591c8: 0x8c8205c4  lw          $v0, 0x5C4($a0)
    ctx->pc = 0x2591c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1476)));
    // 0x2591cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2591ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2591d0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x2591d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2591d4: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2591d4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2591d8:
    // 0x2591d8: 0xac8205c4  sw          $v0, 0x5C4($a0)
    ctx->pc = 0x2591d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1476), GPR_U32(ctx, 2));
    // 0x2591dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2591dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2591e0: 0x240a006c  addiu       $t2, $zero, 0x6C
    ctx->pc = 0x2591e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x2591e4: 0x2409006d  addiu       $t1, $zero, 0x6D
    ctx->pc = 0x2591e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_2591e8:
    // 0x2591e8: 0x15000007  bnez        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2591E8u;
    {
        const bool branch_taken_0x2591e8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2591ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2591E8u;
        // 0x2591ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2591e8) {
            ctx->pc = 0x259208u;
            goto label_259208;
        }
    }
    ctx->pc = 0x2591F0u;
    // 0x2591f0: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x2591f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2591f4: 0x90420040  lbu         $v0, 0x40($v0)
    ctx->pc = 0x2591f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2591f8: 0x504a0004  beql        $v0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2591F8u;
    {
        const bool branch_taken_0x2591f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        if (branch_taken_0x2591f8) {
            ctx->pc = 0x2591FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2591F8u;
            // 0x2591fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25920Cu;
            goto label_25920c;
        }
    }
    ctx->pc = 0x259200u;
    // 0x259200: 0x54490003  bnel        $v0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x259200u;
    {
        const bool branch_taken_0x259200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x259200) {
            ctx->pc = 0x259204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259200u;
            // 0x259204: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259210u;
            goto label_259210;
        }
    }
    ctx->pc = 0x259208u;
label_259208:
    // 0x259208: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x259208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25920c:
    // 0x25920c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25920cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_259210:
    // 0x259210: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x259210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x259214: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x259214u;
    {
        const bool branch_taken_0x259214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259214u;
        // 0x259218: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259214) {
            ctx->pc = 0x2591E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2591e8;
        }
    }
    ctx->pc = 0x25921Cu;
    // 0x25921c: 0x94e20044  lhu         $v0, 0x44($a3)
    ctx->pc = 0x25921cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x259220: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x259220u;
    {
        const bool branch_taken_0x259220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259220u;
        // 0x259224: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259220) {
            ctx->pc = 0x259248u;
            goto label_259248;
        }
    }
    ctx->pc = 0x259228u;
    // 0x259228: 0x8ce3003c  lw          $v1, 0x3C($a3)
    ctx->pc = 0x259228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x25922c: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x25922cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x259230: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x259230u;
    {
        const bool branch_taken_0x259230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259230u;
        // 0x259234: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259230) {
            ctx->pc = 0x259250u;
            goto label_259250;
        }
    }
    ctx->pc = 0x259238u;
    // 0x259238: 0x55000008  bnel        $t0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x259238u;
    {
        const bool branch_taken_0x259238 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x259238) {
            ctx->pc = 0x25923Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259238u;
            // 0x25923c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25925Cu;
            goto label_25925c;
        }
    }
    ctx->pc = 0x259240u;
    // 0x259240: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x259240u;
    {
        const bool branch_taken_0x259240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259240) {
            ctx->pc = 0x259250u;
            goto label_259250;
        }
    }
    ctx->pc = 0x259248u;
label_259248:
    // 0x259248: 0x8ce3003c  lw          $v1, 0x3C($a3)
    ctx->pc = 0x259248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x25924c: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x25924cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_259250:
    // 0x259250: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x259250u;
    {
        const bool branch_taken_0x259250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259250u;
        // 0x259254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259250) {
            ctx->pc = 0x259260u;
            goto label_259260;
        }
    }
    ctx->pc = 0x259258u;
    // 0x259258: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x259258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25925c:
    // 0x25925c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25925cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_259260:
    // 0x259260: 0xac8605b8  sw          $a2, 0x5B8($a0)
    ctx->pc = 0x259260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 6));
    // 0x259264: 0xac8205b4  sw          $v0, 0x5B4($a0)
    ctx->pc = 0x259264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1460), GPR_U32(ctx, 2));
    // 0x259268: 0x84a50042  lh          $a1, 0x42($a1)
    ctx->pc = 0x259268u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 66)));
    // 0x25926c: 0x28a2002f  slti        $v0, $a1, 0x2F
    ctx->pc = 0x25926cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)47) ? 1 : 0);
    // 0x259270: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x259270u;
    {
        const bool branch_taken_0x259270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259270) {
            ctx->pc = 0x259274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259270u;
            // 0x259274: 0x8c8205bc  lw          $v0, 0x5BC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2592A8u;
            goto label_2592a8;
        }
    }
    ctx->pc = 0x259278u;
    // 0x259278: 0x28a2002d  slti        $v0, $a1, 0x2D
    ctx->pc = 0x259278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x25927c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x25927Cu;
    {
        const bool branch_taken_0x25927c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25927c) {
            ctx->pc = 0x259280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25927Cu;
            // 0x259280: 0x8c8205bc  lw          $v0, 0x5BC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2592A8u;
            goto label_2592a8;
        }
    }
    ctx->pc = 0x259284u;
    // 0x259284: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x259284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x259288: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x259288u;
    {
        const bool branch_taken_0x259288 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259288u;
        // 0x25928c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259288) {
            ctx->pc = 0x2592A4u;
            goto label_2592a4;
        }
    }
    ctx->pc = 0x259290u;
    // 0x259290: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x259290u;
    {
        const bool branch_taken_0x259290 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x259290) {
            ctx->pc = 0x259294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259290u;
            // 0x259294: 0x8c8205bc  lw          $v0, 0x5BC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2592A8u;
            goto label_2592a8;
        }
    }
    ctx->pc = 0x259298u;
    // 0x259298: 0x8c8205c4  lw          $v0, 0x5C4($a0)
    ctx->pc = 0x259298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1476)));
    // 0x25929c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25929Cu;
    {
        const bool branch_taken_0x25929c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25929c) {
            ctx->pc = 0x2592A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25929Cu;
            // 0x2592a0: 0xac8005b4  sw          $zero, 0x5B4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 1460), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2592A4u;
            goto label_2592a4;
        }
    }
    ctx->pc = 0x2592A4u;
label_2592a4:
    // 0x2592a4: 0x8c8205bc  lw          $v0, 0x5BC($a0)
    ctx->pc = 0x2592a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1468)));
label_2592a8:
    // 0x2592a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2592A8u;
    {
        const bool branch_taken_0x2592a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2592ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592A8u;
        // 0x2592ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2592a8) {
            ctx->pc = 0x2592C0u;
            goto label_2592c0;
        }
    }
    ctx->pc = 0x2592B0u;
    // 0x2592b0: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2592B0u;
    {
        const bool branch_taken_0x2592b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2592b0) {
            ctx->pc = 0x2592B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2592B0u;
            // 0x2592b4: 0xac8305bc  sw          $v1, 0x5BC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 1468), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2592C8u;
            goto label_2592c8;
        }
    }
    ctx->pc = 0x2592B8u;
    // 0x2592b8: 0x55600003  bnel        $t3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2592B8u;
    {
        const bool branch_taken_0x2592b8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x2592b8) {
            ctx->pc = 0x2592BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2592B8u;
            // 0x2592bc: 0xac8305bc  sw          $v1, 0x5BC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 1468), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2592C8u;
            goto label_2592c8;
        }
    }
    ctx->pc = 0x2592C0u;
label_2592c0:
    // 0x2592c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2592c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2592c4: 0xac8305bc  sw          $v1, 0x5BC($a0)
    ctx->pc = 0x2592c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1468), GPR_U32(ctx, 3));
label_2592c8:
    // 0x2592c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2592C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2592C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2592D0u;
}
