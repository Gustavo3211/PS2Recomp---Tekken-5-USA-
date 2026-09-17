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

// Function: sub_0031A5E8
// Address: 0x31a5e8 - 0x31a6a8
void sub_0031A5E8_0x31a5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A5E8_0x31a5e8");
#endif

    switch (ctx->pc) {
        case 0x31a5f8u: goto label_31a5f8;
        case 0x31a65cu: goto label_31a65c;
        default: break;
    }

    ctx->pc = 0x31a5e8u;

    // 0x31a5e8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x31a5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x31a5ec: 0x24840d00  addiu       $a0, $a0, 0xD00
    ctx->pc = 0x31a5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3328));
    // 0x31a5f0: 0xc0c8b44  jal         func_322D10
    ctx->pc = 0x31A5F0u;
    SET_GPR_U32(ctx, 31, 0x31A5F8u);
    ctx->pc = 0x31A5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A5F0u;
    // 0x31a5f4: 0x248400d8  addiu       $a0, $a0, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322D10u, 0x31A5F0u, 0x31A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A5F8u;
label_31a5f8:
    // 0x31a5f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x31A5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A5FCu;
        // 0x31a600: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A604u;
    // 0x31a604: 0x0  nop
    ctx->pc = 0x31a604u;
    // NOP
    // 0x31a608: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x31a608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x31a60c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a60cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a610: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x31a610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x31a614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31a614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31a618: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31a618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31a61c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x31A61Cu;
    {
        const bool branch_taken_0x31a61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A61Cu;
        // 0x31a620: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a61c) {
            ctx->pc = 0x31A6B4u;
            return;
        }
    }
    ctx->pc = 0x31A624u;
    // 0x31a624: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x31a624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x31a628: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31a628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x31a62c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31a630: 0x8c632e40  lw          $v1, 0x2E40($v1)
    ctx->pc = 0x31a630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11840)));
    // 0x31a634: 0x600008  jr          $v1
    ctx->pc = 0x31A634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31A640u: goto label_31a640;
            case 0x31A650u: goto label_31a650;
            case 0x31A668u: goto label_31a668;
            case 0x31A678u: goto label_31a678;
            case 0x31A688u: goto label_31a688;
            case 0x31A698u: goto label_31a698;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A634u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31A63Cu;
    // 0x31a63c: 0x0  nop
    ctx->pc = 0x31a63cu;
    // NOP
label_31a640:
    // 0x31a640: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31a640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31a644: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x31A644u;
    {
        const bool branch_taken_0x31a644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A644u;
        // 0x31a648: 0x8c430db0  lw          $v1, 0xDB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a644) {
            ctx->pc = 0x31A6B0u;
            return;
        }
    }
    ctx->pc = 0x31A64Cu;
    // 0x31a64c: 0x0  nop
    ctx->pc = 0x31a64cu;
    // NOP
label_31a650:
    // 0x31a650: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x31a650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x31a654: 0xc0c8226  jal         func_320898
    ctx->pc = 0x31A654u;
    SET_GPR_U32(ctx, 31, 0x31A65Cu);
    ctx->pc = 0x31A658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A654u;
    // 0x31a658: 0x24841180  addiu       $a0, $a0, 0x1180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320898u, 0x31A654u, 0x31A65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A65Cu;
label_31a65c:
    // 0x31a65c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x31A65Cu;
    {
        const bool branch_taken_0x31a65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A65Cu;
        // 0x31a660: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a65c) {
            ctx->pc = 0x31A6B4u;
            return;
        }
    }
    ctx->pc = 0x31A664u;
    // 0x31a664: 0x0  nop
    ctx->pc = 0x31a664u;
    // NOP
label_31a668:
    // 0x31a668: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31a668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31a66c: 0xc4400ef0  lwc1        $f0, 0xEF0($v0)
    ctx->pc = 0x31a66cu;
    { uint32_t bits = FAST_READ32(0x400EF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a670: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31A670u;
    {
        const bool branch_taken_0x31a670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A670u;
        // 0x31a674: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a670) {
            ctx->pc = 0x31A6B4u;
            return;
        }
    }
    ctx->pc = 0x31A678u;
label_31a678:
    // 0x31a678: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31a678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31a67c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31A67Cu;
    {
        const bool branch_taken_0x31a67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A67Cu;
        // 0x31a680: 0x8c430dd8  lw          $v1, 0xDD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a67c) {
            ctx->pc = 0x31A6B0u;
            return;
        }
    }
    ctx->pc = 0x31A684u;
    // 0x31a684: 0x0  nop
    ctx->pc = 0x31a684u;
    // NOP
label_31a688:
    // 0x31a688: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31a688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31a68c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31A68Cu;
    {
        const bool branch_taken_0x31a68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A68Cu;
        // 0x31a690: 0x8c430de0  lw          $v1, 0xDE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a68c) {
            ctx->pc = 0x31A6B0u;
            return;
        }
    }
    ctx->pc = 0x31A694u;
    // 0x31a694: 0x0  nop
    ctx->pc = 0x31a694u;
    // NOP
label_31a698:
    // 0x31a698: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31a698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31a69c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31A69Cu;
    {
        const bool branch_taken_0x31a69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A69Cu;
        // 0x31a6a0: 0x8c430de4  lw          $v1, 0xDE4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a69c) {
            ctx->pc = 0x31A6B0u;
            return;
        }
    }
    ctx->pc = 0x31A6A4u;
    // 0x31a6a4: 0x0  nop
    ctx->pc = 0x31a6a4u;
    // NOP
    ctx->pc = 0x31a6a8u;
}
