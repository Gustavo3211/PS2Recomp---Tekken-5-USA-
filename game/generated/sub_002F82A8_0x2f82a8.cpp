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

// Function: sub_002F82A8
// Address: 0x2f82a8 - 0x2f8428
void sub_002F82A8_0x2f82a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F82A8_0x2f82a8");
#endif

    switch (ctx->pc) {
        case 0x2f8348u: goto label_2f8348;
        case 0x2f83fcu: goto label_2f83fc;
        default: break;
    }

    ctx->pc = 0x2f82a8u;

    // 0x2f82a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f82a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f82ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f82acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f82b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f82b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f82b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f82b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f82b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f82b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f82bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2f82bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2f82c0: 0x8e230114  lw          $v1, 0x114($s1)
    ctx->pc = 0x2f82c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2f82c4: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x2F82C4u;
    {
        const bool branch_taken_0x2f82c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F82C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82C4u;
        // 0x2f82c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f82c4) {
            ctx->pc = 0x2F840Cu;
            goto label_2f840c;
        }
    }
    ctx->pc = 0x2F82CCu;
    // 0x2f82cc: 0x26300140  addiu       $s0, $s1, 0x140
    ctx->pc = 0x2f82ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x2f82d0: 0x51b03  sra         $v1, $a1, 12
    ctx->pc = 0x2f82d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 12));
    // 0x2f82d4: 0x51383  sra         $v0, $a1, 14
    ctx->pc = 0x2f82d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 14));
    // 0x2f82d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f82d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f82dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f82dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f82e0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2f82e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2f82e4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F82E4u;
    {
        const bool branch_taken_0x2f82e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82E4u;
        // 0x2f82e8: 0x439023  subu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f82e4) {
            ctx->pc = 0x2F82FCu;
            goto label_2f82fc;
        }
    }
    ctx->pc = 0x2F82ECu;
    // 0x2f82ec: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f82ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f82f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f82f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f82f4: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F82F4u;
    {
        const bool branch_taken_0x2f82f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f82f4) {
            ctx->pc = 0x2F82F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F82F4u;
            // 0x2f82f8: 0x8c820120  lw          $v0, 0x120($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F830Cu;
            goto label_2f830c;
        }
    }
    ctx->pc = 0x2F82FCu;
label_2f82fc:
    // 0x2f82fc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f82fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2f8300: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f8300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8304: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f8304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2f8308: 0x8c820120  lw          $v0, 0x120($a0)
    ctx->pc = 0x2f8308u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x120u));
label_2f830c:
    // 0x2f830c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F830Cu;
    {
        const bool branch_taken_0x2f830c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f830c) {
            ctx->pc = 0x2F8310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F830Cu;
            // 0x2f8310: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8350u;
            goto label_2f8350;
        }
    }
    ctx->pc = 0x2F8314u;
    // 0x2f8314: 0x26250148  addiu       $a1, $s1, 0x148
    ctx->pc = 0x2f8314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
    // 0x2f8318: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f8318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f831c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F831Cu;
    {
        const bool branch_taken_0x2f831c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f831c) {
            ctx->pc = 0x2F8320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F831Cu;
            // 0x2f8320: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8338u;
            goto label_2f8338;
        }
    }
    ctx->pc = 0x2F8324u;
    // 0x2f8324: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f8324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f8328: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f8328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f832c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F832Cu;
    {
        const bool branch_taken_0x2f832c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f832c) {
            ctx->pc = 0x2F8340u;
            goto label_2f8340;
        }
    }
    ctx->pc = 0x2F8334u;
    // 0x2f8334: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f8334u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f8338:
    // 0x2f8338: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f8338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f833c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f833cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f8340:
    // 0x2f8340: 0xc0bde92  jal         func_2F7A48
    ctx->pc = 0x2F8340u;
    SET_GPR_U32(ctx, 31, 0x2F8348u);
    ctx->pc = 0x2F7A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7A48u, 0x2F8340u, 0x2F8348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8348u;
label_2f8348:
    // 0x2f8348: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F8348u;
    {
        const bool branch_taken_0x2f8348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8348u;
        // 0x2f834c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8348) {
            ctx->pc = 0x2F8374u;
            goto label_2f8374;
        }
    }
    ctx->pc = 0x2F8350u;
label_2f8350:
    // 0x2f8350: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F8350u;
    {
        const bool branch_taken_0x2f8350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8350) {
            ctx->pc = 0x2F8354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8350u;
            // 0x2f8354: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F836Cu;
            goto label_2f836c;
        }
    }
    ctx->pc = 0x2F8358u;
    // 0x2f8358: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f8358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f835c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f835cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f8360: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8360u;
    {
        const bool branch_taken_0x2f8360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F8364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8360u;
        // 0x2f8364: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8360) {
            ctx->pc = 0x2F8374u;
            goto label_2f8374;
        }
    }
    ctx->pc = 0x2F8368u;
    // 0x2f8368: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f8368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2f836c:
    // 0x2f836c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f836cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2f8370: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2f8370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2f8374:
    // 0x2f8374: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f8374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8378: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8378u;
    {
        const bool branch_taken_0x2f8378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8378u;
        // 0x2f837c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8378) {
            ctx->pc = 0x2F8390u;
            goto label_2f8390;
        }
    }
    ctx->pc = 0x2F8380u;
    // 0x2f8380: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f8380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f8384: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f8384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f8388: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8388u;
    {
        const bool branch_taken_0x2f8388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f8388) {
            ctx->pc = 0x2F838Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8388u;
            // 0x2f838c: 0x8e2a0118  lw          $t2, 0x118($s1) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F83A0u;
            goto label_2f83a0;
        }
    }
    ctx->pc = 0x2F8390u;
label_2f8390:
    // 0x2f8390: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f8390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2f8394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f8394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8398: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f8398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2f839c: 0x8e2a0118  lw          $t2, 0x118($s1)
    ctx->pc = 0x2f839cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_2f83a0:
    // 0x2f83a0: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x2f83a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2f83a4: 0x8e290120  lw          $t1, 0x120($s1)
    ctx->pc = 0x2f83a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2f83a8: 0x2487ffff  addiu       $a3, $a0, -0x1
    ctx->pc = 0x2f83a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2f83ac: 0x8ca80120  lw          $t0, 0x120($a1)
    ctx->pc = 0x2f83acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 288)));
    // 0x2f83b0: 0x1521821  addu        $v1, $t2, $s2
    ctx->pc = 0x2f83b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 18)));
    // 0x2f83b4: 0x1321021  addu        $v0, $t1, $s2
    ctx->pc = 0x2f83b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 18)));
    // 0x2f83b8: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x2f83b8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2f83bc: 0x88300a  movz        $a2, $a0, $t0
    ctx->pc = 0x2f83bcu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x2f83c0: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x2f83c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2f83c4: 0x5180b  movn        $v1, $zero, $a1
    ctx->pc = 0x2f83c4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2f83c8: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x2f83c8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2f83cc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2f83ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2f83d0: 0xe3202a  slt         $a0, $a3, $v1
    ctx->pc = 0x2f83d0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f83d4: 0xc2282a  slt         $a1, $a2, $v0
    ctx->pc = 0x2f83d4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f83d8: 0x64380a  movz        $a3, $v1, $a0
    ctx->pc = 0x2f83d8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x2f83dc: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x2f83dcu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x2f83e0: 0xae270118  sw          $a3, 0x118($s1)
    ctx->pc = 0x2f83e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 7));
    // 0x2f83e4: 0xae2a011c  sw          $t2, 0x11C($s1)
    ctx->pc = 0x2f83e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 10));
    // 0x2f83e8: 0xae290124  sw          $t1, 0x124($s1)
    ctx->pc = 0x2f83e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 9));
    // 0x2f83ec: 0x10490003  beq         $v0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F83ECu;
    {
        const bool branch_taken_0x2f83ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x2F83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F83ECu;
        // 0x2f83f0: 0xae220120  sw          $v0, 0x120($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f83ec) {
            ctx->pc = 0x2F83FCu;
            goto label_2f83fc;
        }
    }
    ctx->pc = 0x2F83F4u;
    // 0x2f83f4: 0xc092940  jal         func_24A500
    ctx->pc = 0x2F83F4u;
    SET_GPR_U32(ctx, 31, 0x2F83FCu);
    ctx->pc = 0x2F83F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F83F4u;
    // 0x2f83f8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2F83F4u, 0x2F83FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F83FCu;
label_2f83fc:
    // 0x2f83fc: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x2f83fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x2f8400: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x2f8400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2f8404: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2f8404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2f8408: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f8408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f840c:
    // 0x2f840c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f840cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8410: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f8410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f8414: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f8414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8418: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2f8418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f841c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F841Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F841Cu;
        // 0x2f8420: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F841Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8424u;
    // 0x2f8424: 0x0  nop
    ctx->pc = 0x2f8424u;
    // NOP
    ctx->pc = 0x2f8428u;
}
