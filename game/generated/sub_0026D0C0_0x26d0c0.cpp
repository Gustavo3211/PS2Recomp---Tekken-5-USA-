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

// Function: sub_0026D0C0
// Address: 0x26d0c0 - 0x26d178
void sub_0026D0C0_0x26d0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D0C0_0x26d0c0");
#endif

    switch (ctx->pc) {
        case 0x26d0fcu: goto label_26d0fc;
        default: break;
    }

    ctx->pc = 0x26d0c0u;

    // 0x26d0c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26d0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26d0c4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x26d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x26d0c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26d0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26d0cc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x26d0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26d0d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26d0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26d0d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D0D4u;
    {
        const bool branch_taken_0x26d0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D0D4u;
        // 0x26d0d8: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d0d4) {
            ctx->pc = 0x26D0E8u;
            goto label_26d0e8;
        }
    }
    ctx->pc = 0x26D0DCu;
    // 0x26d0dc: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x26d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x26d0e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26d0e4: 0xac6200f4  sw          $v0, 0xF4($v1)
    ctx->pc = 0x26d0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 2));
label_26d0e8:
    // 0x26d0e8: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x26d0e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x26d0ec: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x26D0ECu;
    {
        const bool branch_taken_0x26d0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D0ECu;
        // 0x26d0f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d0ec) {
            ctx->pc = 0x26D164u;
            goto label_26d164;
        }
    }
    ctx->pc = 0x26D0F4u;
    // 0x26d0f4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26D0F4u;
    SET_GPR_U32(ctx, 31, 0x26D0FCu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26D0F4u, 0x26D0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D0FCu;
label_26d0fc:
    // 0x26d0fc: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26d0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d100: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x26d100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x26d104: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x26d104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26d108: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x26d108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x26d10c: 0x84a3033c  lh          $v1, 0x33C($a1)
    ctx->pc = 0x26d10cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 828)));
    // 0x26d110: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x26d110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26d114: 0x8444033e  lh          $a0, 0x33E($v0)
    ctx->pc = 0x26d114u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 830)));
    // 0x26d118: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26d118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26d11c: 0xaca3008c  sw          $v1, 0x8C($a1)
    ctx->pc = 0x26d11cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 3));
    // 0x26d120: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26d120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d124: 0xac46005c  sw          $a2, 0x5C($v0)
    ctx->pc = 0x26d124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 6));
    // 0x26d128: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26d128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d12c: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x26d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x26d130: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D130u;
    {
        const bool branch_taken_0x26d130 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x26d130) {
            ctx->pc = 0x26D134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D130u;
            // 0x26d134: 0xac600048  sw          $zero, 0x48($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D144u;
            goto label_26d144;
        }
    }
    ctx->pc = 0x26D138u;
    // 0x26d138: 0xac660060  sw          $a2, 0x60($v1)
    ctx->pc = 0x26d138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 6));
    // 0x26d13c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d140: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x26d140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
label_26d144:
    // 0x26d144: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26d144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d148: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x26d148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x26d14c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x26d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x26d150: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x26d150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d154: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x26d154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x26d158: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26d158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d15c: 0xac660064  sw          $a2, 0x64($v1)
    ctx->pc = 0x26d15cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 6));
    // 0x26d160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26d160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26d164:
    // 0x26d164: 0x3e00008  jr          $ra
    ctx->pc = 0x26D164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D164u;
        // 0x26d168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D16Cu;
    // 0x26d16c: 0x0  nop
    ctx->pc = 0x26d16cu;
    // NOP
    // 0x26d170: 0x3e00008  jr          $ra
    ctx->pc = 0x26D170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D170u;
        // 0x26d174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D178u;
}
