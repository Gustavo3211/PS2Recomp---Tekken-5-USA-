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

// Function: sub_0024D200
// Address: 0x24d200 - 0x24d3a0
void sub_0024D200_0x24d200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D200_0x24d200");
#endif

    switch (ctx->pc) {
        case 0x24d238u: goto label_24d238;
        case 0x24d278u: goto label_24d278;
        case 0x24d2acu: goto label_24d2ac;
        case 0x24d2c0u: goto label_24d2c0;
        case 0x24d2f8u: goto label_24d2f8;
        case 0x24d348u: goto label_24d348;
        default: break;
    }

    ctx->pc = 0x24d200u;

    // 0x24d200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24d200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24d204: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x24d204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x24d208: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x24d208u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x24d20c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24d20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24d210: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24d210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24d214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24d214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24d218: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24d218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d21c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24d21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24d220: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24d220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d224: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24d224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24d228: 0x26b383c0  addiu       $s3, $s5, -0x7C40
    ctx->pc = 0x24d228u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4294935488));
    // 0x24d22c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24d22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x24d230: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x24d230u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    // 0x24d234: 0x0  nop
    ctx->pc = 0x24d234u;
    // NOP
label_24d238:
    // 0x24d238: 0x26858858  addiu       $a1, $s4, -0x77A8
    ctx->pc = 0x24d238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936664));
    // 0x24d23c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d240: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x24d240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x24d244: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x24d244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x24d248: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x24d248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d24c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x24D24Cu;
    {
        const bool branch_taken_0x24d24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D24Cu;
        // 0x24d250: 0x8eb183c0  lw          $s1, -0x7C40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d24c) {
            ctx->pc = 0x24D278u;
            goto label_24d278;
        }
    }
    ctx->pc = 0x24D254u;
    // 0x24d254: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x24d254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x24d258: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x24d258u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x24d25c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x24d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24d260: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24d260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x24d264: 0x2421f61c  addiu       $at, $at, -0x9E4
    ctx->pc = 0x24d264u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294964764));
    // 0x24d268: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x24d268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x24d26c: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x24d26cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x24d270: 0xc0da92c  jal         func_36A4B0
    ctx->pc = 0x24D270u;
    SET_GPR_U32(ctx, 31, 0x24D278u);
    ctx->pc = 0x24D274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D270u;
    // 0x24d274: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A4B0u, 0x24D270u, 0x24D278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D278u;
label_24d278:
    // 0x24d278: 0x2e22000a  sltiu       $v0, $s1, 0xA
    ctx->pc = 0x24d278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x24d27c: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x24D27Cu;
    {
        const bool branch_taken_0x24d27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d27c) {
            ctx->pc = 0x24D280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D27Cu;
            // 0x24d280: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D370u;
            goto label_24d370;
        }
    }
    ctx->pc = 0x24D284u;
    // 0x24d284: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x24d284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x24d288: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x24d288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x24d28c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24d290: 0x8c6319c0  lw          $v1, 0x19C0($v1)
    ctx->pc = 0x24d290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6592)));
    // 0x24d294: 0x600008  jr          $v1
    ctx->pc = 0x24D294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24D2A0u: goto label_24d2a0;
            case 0x24D2B8u: goto label_24d2b8;
            case 0x24D2D0u: goto label_24d2d0;
            case 0x24D300u: goto label_24d300;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D294u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24D29Cu;
    // 0x24d29c: 0x0  nop
    ctx->pc = 0x24d29cu;
    // NOP
label_24d2a0:
    // 0x24d2a0: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x24d2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x24d2a4: 0xc08664a  jal         func_219928
    ctx->pc = 0x24D2A4u;
    SET_GPR_U32(ctx, 31, 0x24D2ACu);
    ctx->pc = 0x24D2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D2A4u;
    // 0x24d2a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219928u, 0x24D2A4u, 0x24D2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D2ACu;
label_24d2ac:
    // 0x24d2ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d2b0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x24D2B0u;
    {
        const bool branch_taken_0x24d2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D2B0u;
        // 0x24d2b4: 0xa262000e  sb          $v0, 0xE($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 14), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d2b0) {
            ctx->pc = 0x24D36Cu;
            goto label_24d36c;
        }
    }
    ctx->pc = 0x24D2B8u;
label_24d2b8:
    // 0x24d2b8: 0xc0b473e  jal         func_2D1CF8
    ctx->pc = 0x24D2B8u;
    SET_GPR_U32(ctx, 31, 0x24D2C0u);
    ctx->pc = 0x2D1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1CF8u, 0x24D2B8u, 0x24D2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D2C0u;
label_24d2c0:
    // 0x24d2c0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x24d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x24d2c4: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x24d2c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x24d2c8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x24d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x24d2cc: 0xa443004e  sh          $v1, 0x4E($v0)
    ctx->pc = 0x24d2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 78), (uint16_t)GPR_U32(ctx, 3));
label_24d2d0:
    // 0x24d2d0: 0x26828858  addiu       $v0, $s4, -0x77A8
    ctx->pc = 0x24d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936664));
    // 0x24d2d4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x24d2d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d2d8: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x24d2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x24d2dc: 0x2512004  sllv        $a0, $s1, $s2
    ctx->pc = 0x24d2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 18) & 0x1F));
    // 0x24d2e0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x24d2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x24d2e4: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x24D2E4u;
    {
        const bool branch_taken_0x24d2e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d2e4) {
            ctx->pc = 0x24D2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D2E4u;
            // 0x24d2e8: 0xa271000e  sb          $s1, 0xE($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 14), (uint8_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D36Cu;
            goto label_24d36c;
        }
    }
    ctx->pc = 0x24D2ECu;
    // 0x24d2ec: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x24d2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x24d2f0: 0xc08664a  jal         func_219928
    ctx->pc = 0x24D2F0u;
    SET_GPR_U32(ctx, 31, 0x24D2F8u);
    ctx->pc = 0x24D2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D2F0u;
    // 0x24d2f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219928u, 0x24D2F0u, 0x24D2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D2F8u;
label_24d2f8:
    // 0x24d2f8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x24D2F8u;
    {
        const bool branch_taken_0x24d2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D2F8u;
        // 0x24d2fc: 0xa271000e  sb          $s1, 0xE($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 14), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d2f8) {
            ctx->pc = 0x24D36Cu;
            goto label_24d36c;
        }
    }
    ctx->pc = 0x24D300u;
label_24d300:
    // 0x24d300: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x24d300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x24d304: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24d304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d308: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x24d308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x24d30c: 0x2669000d  addiu       $t1, $s3, 0xD
    ctx->pc = 0x24d30cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 13));
    // 0x24d310: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24d310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24d314: 0x26080008  addiu       $t0, $s0, 0x8
    ctx->pc = 0x24d314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x24d318: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x24d318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x24d31c: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x24d31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x24d320: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x24d320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d324: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x24d324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x24d328: 0xa0600016  sb          $zero, 0x16($v1)
    ctx->pc = 0x24d328u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x24d32c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x24d32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d330: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x24d330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d334: 0x92020040  lbu         $v0, 0x40($s0)
    ctx->pc = 0x24d334u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x24d338: 0xa0a20017  sb          $v0, 0x17($a1)
    ctx->pc = 0x24d338u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 23), (uint8_t)GPR_U32(ctx, 2));
    // 0x24d33c: 0x9203003c  lbu         $v1, 0x3C($s0)
    ctx->pc = 0x24d33cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x24d340: 0xa0830019  sb          $v1, 0x19($a0)
    ctx->pc = 0x24d340u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 3));
    // 0x24d344: 0x0  nop
    ctx->pc = 0x24d344u;
    // NOP
label_24d348:
    // 0x24d348: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x24d348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x24d34c: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x24d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x24d350: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x24d350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x24d354: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x24d354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x24d358: 0x90440040  lbu         $a0, 0x40($v0)
    ctx->pc = 0x24d358u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x24d35c: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x24d35cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x24d360: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x24d360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x24d364: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24D364u;
    {
        const bool branch_taken_0x24d364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D364u;
        // 0x24d368: 0xa06400f0  sb          $a0, 0xF0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 240), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d364) {
            ctx->pc = 0x24D348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d348;
        }
    }
    ctx->pc = 0x24D36Cu;
label_24d36c:
    // 0x24d36c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24d36cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_24d370:
    // 0x24d370: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x24d370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24d374: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x24D374u;
    {
        const bool branch_taken_0x24d374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D374u;
        // 0x24d378: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d374) {
            ctx->pc = 0x24D238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d238;
        }
    }
    ctx->pc = 0x24D37Cu;
    // 0x24d37c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24d37cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d380: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24d380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24d384: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24d384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d388: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24d388u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24d38c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24d38cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d390: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24d390u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24d394: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24d394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d398: 0x3e00008  jr          $ra
    ctx->pc = 0x24D398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D398u;
        // 0x24d39c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D3A0u;
}
