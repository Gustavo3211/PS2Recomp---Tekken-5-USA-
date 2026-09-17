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

// Function: sub_004AE938
// Address: 0x4ae938 - 0x4ae968
void sub_004AE938_0x4ae938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE938_0x4ae938");
#endif

    switch (ctx->pc) {
        case 0x4ae95cu: goto label_4ae95c;
        default: break;
    }

    ctx->pc = 0x4ae938u;

    // 0x4ae938: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4ae938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4ae93c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ae93cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ae940: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4ae940u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4ae944: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ae944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ae948: 0x24840d1c  addiu       $a0, $a0, 0xD1C
    ctx->pc = 0x4ae948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3356));
    // 0x4ae94c: 0x24a50d20  addiu       $a1, $a1, 0xD20
    ctx->pc = 0x4ae94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3360));
    // 0x4ae950: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ae954: 0xc12a8b8  jal         func_4AA2E0
    ctx->pc = 0x4AE954u;
    SET_GPR_U32(ctx, 31, 0x4AE95Cu);
    ctx->pc = 0x4AE958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE954u;
    // 0x4ae958: 0x24c60d24  addiu       $a2, $a2, 0xD24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3364));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA2E0u, 0x4AE954u, 0x4AE95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE95Cu;
label_4ae95c:
    // 0x4ae95c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae960: 0x812ba28  j           func_4AE8A0
    ctx->pc = 0x4AE960u;
    ctx->pc = 0x4AE964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE960u;
    // 0x4ae964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE8A0u;
    sub_004AE8A0_0x4ae8a0(rdram, ctx, runtime); return;
    ctx->pc = 0x4AE968u;
}
