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

// Function: sub_00370358
// Address: 0x370358 - 0x3703a8
void sub_00370358_0x370358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370358_0x370358");
#endif

    switch (ctx->pc) {
        case 0x37037cu: goto label_37037c;
        case 0x370394u: goto label_370394;
        default: break;
    }

    ctx->pc = 0x370358u;

    // 0x370358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37035c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x37035cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x370360: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x370364: 0x24507400  addiu       $s0, $v0, 0x7400
    ctx->pc = 0x370364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29696));
    // 0x370368: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x370368u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7400u));
    // 0x37036c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x37036Cu;
    {
        const bool branch_taken_0x37036c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x370370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37036Cu;
        // 0x370370: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37036c) {
            ctx->pc = 0x370394u;
            goto label_370394;
        }
    }
    ctx->pc = 0x370374u;
    // 0x370374: 0xc0dc55e  jal         func_371578
    ctx->pc = 0x370374u;
    SET_GPR_U32(ctx, 31, 0x37037Cu);
    ctx->pc = 0x371578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371578u, 0x370374u, 0x37037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37037Cu;
label_37037c:
    // 0x37037c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x37037cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x370380: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x370380u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x370384: 0x24a50a38  addiu       $a1, $a1, 0xA38
    ctx->pc = 0x370384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2616));
    // 0x370388: 0x24c67560  addiu       $a2, $a2, 0x7560
    ctx->pc = 0x370388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30048));
    // 0x37038c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x37038Cu;
    SET_GPR_U32(ctx, 31, 0x370394u);
    ctx->pc = 0x370390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37038Cu;
    // 0x370390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x37038Cu, 0x370394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370394u;
label_370394:
    // 0x370394: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x370394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37039c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x37039cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3703a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3703A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3703A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3703A0u;
        // 0x3703a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3703A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3703A8u;
}
