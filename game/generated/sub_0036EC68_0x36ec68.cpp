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

// Function: sub_0036EC68
// Address: 0x36ec68 - 0x36ecd0
void sub_0036EC68_0x36ec68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EC68_0x36ec68");
#endif

    switch (ctx->pc) {
        case 0x36ec8cu: goto label_36ec8c;
        case 0x36eca4u: goto label_36eca4;
        default: break;
    }

    ctx->pc = 0x36ec68u;

    // 0x36ec68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ec68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36ec6c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36ec70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36ec70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36ec74: 0x24507260  addiu       $s0, $v0, 0x7260
    ctx->pc = 0x36ec74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29280));
    // 0x36ec78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7260u));
    // 0x36ec7c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36EC7Cu;
    {
        const bool branch_taken_0x36ec7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36EC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EC7Cu;
        // 0x36ec80: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ec7c) {
            ctx->pc = 0x36ECA4u;
            goto label_36eca4;
        }
    }
    ctx->pc = 0x36EC84u;
    // 0x36ec84: 0xc0dbc5a  jal         func_36F168
    ctx->pc = 0x36EC84u;
    SET_GPR_U32(ctx, 31, 0x36EC8Cu);
    ctx->pc = 0x36F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F168u, 0x36EC84u, 0x36EC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC8Cu;
label_36ec8c:
    // 0x36ec8c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36ec8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36ec90: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36ec90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36ec94: 0x24a5fcb0  addiu       $a1, $a1, -0x350
    ctx->pc = 0x36ec94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966448));
    // 0x36ec98: 0x24c67250  addiu       $a2, $a2, 0x7250
    ctx->pc = 0x36ec98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29264));
    // 0x36ec9c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36EC9Cu;
    SET_GPR_U32(ctx, 31, 0x36ECA4u);
    ctx->pc = 0x36ECA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EC9Cu;
    // 0x36eca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36EC9Cu, 0x36ECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ECA4u;
label_36eca4:
    // 0x36eca4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36eca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36eca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ecac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36ecacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36ecb0: 0x3e00008  jr          $ra
    ctx->pc = 0x36ECB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ECB0u;
        // 0x36ecb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36ECB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36ECB8u;
    // 0x36ecb8: 0x3e00008  jr          $ra
    ctx->pc = 0x36ECB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ECB8u;
        // 0x36ecbc: 0x8c820070  lw          $v0, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36ECB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36ECC0u;
    // 0x36ecc0: 0x3e00008  jr          $ra
    ctx->pc = 0x36ECC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36ECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ECC0u;
        // 0x36ecc4: 0xac850070  sw          $a1, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36ECC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36ECC8u;
    // 0x36ecc8: 0x3e00008  jr          $ra
    ctx->pc = 0x36ECC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ECC8u;
        // 0x36eccc: 0x24820074  addiu       $v0, $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36ECC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36ECD0u;
}
