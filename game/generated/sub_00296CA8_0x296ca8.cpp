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

// Function: sub_00296CA8
// Address: 0x296ca8 - 0x296d18
void sub_00296CA8_0x296ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296CA8_0x296ca8");
#endif

    switch (ctx->pc) {
        case 0x296ce0u: goto label_296ce0;
        case 0x296cf8u: goto label_296cf8;
        default: break;
    }

    ctx->pc = 0x296ca8u;

    // 0x296ca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x296ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x296cac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296cb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296cb4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x296cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x296cb8: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x296cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x296cbc: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x296CBCu;
    {
        const bool branch_taken_0x296cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296cbc) {
            ctx->pc = 0x296CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296CBCu;
            // 0x296cc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296D08u;
            goto label_296d08;
        }
    }
    ctx->pc = 0x296CC4u;
    // 0x296cc4: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x296cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x296cc8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x296CC8u;
    {
        const bool branch_taken_0x296cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CC8u;
        // 0x296ccc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296cc8) {
            ctx->pc = 0x296D04u;
            goto label_296d04;
        }
    }
    ctx->pc = 0x296CD0u;
    // 0x296cd0: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x296cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x296cd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x296cd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296cd8: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x296CD8u;
    SET_GPR_U32(ctx, 31, 0x296CE0u);
    ctx->pc = 0x296CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296CD8u;
    // 0x296cdc: 0x8c8500a4  lw          $a1, 0xA4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x296CD8u, 0x296CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296CE0u;
label_296ce0:
    // 0x296ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ce4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x296ce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x296ce8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x296ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x296cec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x296cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296cf0: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x296CF0u;
    SET_GPR_U32(ctx, 31, 0x296CF8u);
    ctx->pc = 0x296CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296CF0u;
    // 0x296cf4: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x296CF0u, 0x296CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296CF8u;
label_296cf8:
    // 0x296cf8: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x296cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x296cfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x296cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x296d00: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x296d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
label_296d04:
    // 0x296d04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_296d08:
    // 0x296d08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x296d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x296d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x296D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D0Cu;
        // 0x296d10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296D14u;
    // 0x296d14: 0x0  nop
    ctx->pc = 0x296d14u;
    // NOP
    ctx->pc = 0x296d18u;
}
