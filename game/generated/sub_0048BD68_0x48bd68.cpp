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

// Function: sub_0048BD68
// Address: 0x48bd68 - 0x48bdd8
void sub_0048BD68_0x48bd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048BD68_0x48bd68");
#endif

    switch (ctx->pc) {
        case 0x48bd88u: goto label_48bd88;
        case 0x48bd90u: goto label_48bd90;
        case 0x48bd98u: goto label_48bd98;
        case 0x48bda0u: goto label_48bda0;
        case 0x48bdb0u: goto label_48bdb0;
        case 0x48bdb8u: goto label_48bdb8;
        default: break;
    }

    ctx->pc = 0x48bd68u;

    // 0x48bd68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48bd68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48bd6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x48bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x48bd70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48bd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48bd74: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x48bd74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x48bd78: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x48bd78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x48bd7c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x48bd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x48bd80: 0xc122fbe  jal         func_48BEF8
    ctx->pc = 0x48BD80u;
    SET_GPR_U32(ctx, 31, 0x48BD88u);
    ctx->pc = 0x48BD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BD80u;
    // 0x48bd84: 0xa6020096  sh          $v0, 0x96($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BEF8u, 0x48BD80u, 0x48BD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BD88u;
label_48bd88:
    // 0x48bd88: 0xc124910  jal         func_492440
    ctx->pc = 0x48BD88u;
    SET_GPR_U32(ctx, 31, 0x48BD90u);
    ctx->pc = 0x48BD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BD88u;
    // 0x48bd8c: 0x3c040018  lui         $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x48BD88u, 0x48BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BD90u;
label_48bd90:
    // 0x48bd90: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x48BD90u;
    SET_GPR_U32(ctx, 31, 0x48BD98u);
    ctx->pc = 0x48BD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BD90u;
    // 0x48bd94: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x48BD90u, 0x48BD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BD98u;
label_48bd98:
    // 0x48bd98: 0xc124c68  jal         func_4931A0
    ctx->pc = 0x48BD98u;
    SET_GPR_U32(ctx, 31, 0x48BDA0u);
    ctx->pc = 0x4931A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4931A0u, 0x48BD98u, 0x48BDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BDA0u;
label_48bda0:
    // 0x48bda0: 0x24028fff  addiu       $v0, $zero, -0x7001
    ctx->pc = 0x48bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294938623));
    // 0x48bda4: 0xa600220a  sh          $zero, 0x220A($s0)
    ctx->pc = 0x48bda4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8714), (uint16_t)GPR_U32(ctx, 0));
    // 0x48bda8: 0xc123c54  jal         func_48F150
    ctx->pc = 0x48BDA8u;
    SET_GPR_U32(ctx, 31, 0x48BDB0u);
    ctx->pc = 0x48BDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BDA8u;
    // 0x48bdac: 0xa6022292  sh          $v0, 0x2292($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8850), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F150u, 0x48BDA8u, 0x48BDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BDB0u;
label_48bdb0:
    // 0x48bdb0: 0xc124620  jal         func_491880
    ctx->pc = 0x48BDB0u;
    SET_GPR_U32(ctx, 31, 0x48BDB8u);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x48BDB0u, 0x48BDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BDB8u;
label_48bdb8:
    // 0x48bdb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48bdb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48bdbc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x48bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48bdc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x48bdc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48bdc4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x48bdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x48bdc8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x48bdc8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x48bdcc: 0xa423e820  sh          $v1, -0x17E0($at)
    ctx->pc = 0x48bdccu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961184), (uint16_t)GPR_U32(ctx, 3));
    // 0x48bdd0: 0x3e00008  jr          $ra
    ctx->pc = 0x48BDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BDD0u;
        // 0x48bdd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48BDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48BDD8u;
}
