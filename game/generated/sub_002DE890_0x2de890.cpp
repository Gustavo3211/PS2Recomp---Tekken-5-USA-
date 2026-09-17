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

// Function: sub_002DE890
// Address: 0x2de890 - 0x2de8d8
void sub_002DE890_0x2de890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE890_0x2de890");
#endif

    switch (ctx->pc) {
        case 0x2de890u: goto label_2de890;
        case 0x2de894u: goto label_2de894;
        case 0x2de898u: goto label_2de898;
        case 0x2de89cu: goto label_2de89c;
        case 0x2de8a0u: goto label_2de8a0;
        case 0x2de8a4u: goto label_2de8a4;
        case 0x2de8a8u: goto label_2de8a8;
        case 0x2de8acu: goto label_2de8ac;
        case 0x2de8b0u: goto label_2de8b0;
        case 0x2de8b4u: goto label_2de8b4;
        case 0x2de8b8u: goto label_2de8b8;
        case 0x2de8bcu: goto label_2de8bc;
        case 0x2de8c0u: goto label_2de8c0;
        case 0x2de8c4u: goto label_2de8c4;
        case 0x2de8c8u: goto label_2de8c8;
        case 0x2de8ccu: goto label_2de8cc;
        case 0x2de8d0u: goto label_2de8d0;
        case 0x2de8d4u: goto label_2de8d4;
        default: break;
    }

    ctx->pc = 0x2de890u;

label_2de890:
    // 0x2de890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2de890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2de894:
    // 0x2de894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2de894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2de898:
    // 0x2de898: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2de898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2de89c:
    // 0x2de89c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2de89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2de8a0:
    // 0x2de8a0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2de8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2de8a4:
    // 0x2de8a4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2de8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2de8a8:
    // 0x2de8a8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2de8a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2de8ac:
    // 0x2de8ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2de8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2de8b0:
    // 0x2de8b0: 0x60f809  jalr        $v1
label_2de8b4:
    if (ctx->pc == 0x2DE8B4u) {
        ctx->pc = 0x2DE8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8B0u;
        // 0x2de8b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE8B8u;
        goto label_2de8b8;
    }
    ctx->pc = 0x2DE8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DE8B8u);
        ctx->pc = 0x2DE8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8B0u;
        // 0x2de8b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE8B0u, 0x2DE8B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DE8B8u;
label_2de8b8:
    // 0x2de8b8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2de8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_2de8bc:
    // 0x2de8bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2de8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de8c0:
    // 0x2de8c0: 0xc0b7ce0  jal         func_2DF380
label_2de8c4:
    if (ctx->pc == 0x2DE8C4u) {
        ctx->pc = 0x2DE8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8C0u;
        // 0x2de8c4: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE8C8u;
        goto label_2de8c8;
    }
    ctx->pc = 0x2DE8C0u;
    SET_GPR_U32(ctx, 31, 0x2DE8C8u);
    ctx->pc = 0x2DE8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE8C0u;
    // 0x2de8c4: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF380u, 0x2DE8C0u, 0x2DE8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE8C8u;
label_2de8c8:
    // 0x2de8c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2de8c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2de8cc:
    // 0x2de8cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2de8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2de8d0:
    // 0x2de8d0: 0x3e00008  jr          $ra
label_2de8d4:
    if (ctx->pc == 0x2DE8D4u) {
        ctx->pc = 0x2DE8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8D0u;
        // 0x2de8d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE8D8u;
        goto label_fallthrough_0x2de8d0;
    }
    ctx->pc = 0x2DE8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE8D0u;
        // 0x2de8d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2de8d0:
    ctx->pc = 0x2DE8D8u;
}
