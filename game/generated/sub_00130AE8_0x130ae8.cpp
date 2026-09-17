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

// Function: sub_00130AE8
// Address: 0x130ae8 - 0x130b38
void sub_00130AE8_0x130ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130AE8_0x130ae8");
#endif

    switch (ctx->pc) {
        case 0x130b0cu: goto label_130b0c;
        case 0x130b24u: goto label_130b24;
        default: break;
    }

    ctx->pc = 0x130ae8u;

    // 0x130ae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130aec: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x130aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x130af0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130af4: 0x24500100  addiu       $s0, $v0, 0x100
    ctx->pc = 0x130af4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x130af8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x130af8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1F0100u));
    // 0x130afc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x130AFCu;
    {
        const bool branch_taken_0x130afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130AFCu;
        // 0x130b00: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130afc) {
            ctx->pc = 0x130B24u;
            goto label_130b24;
        }
    }
    ctx->pc = 0x130B04u;
    // 0x130b04: 0xc04c054  jal         func_130150
    ctx->pc = 0x130B04u;
    SET_GPR_U32(ctx, 31, 0x130B0Cu);
    ctx->pc = 0x130150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130150u, 0x130B04u, 0x130B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B0Cu;
label_130b0c:
    // 0x130b0c: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x130b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x130b10: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x130b10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x130b14: 0x24a5f490  addiu       $a1, $a1, -0xB70
    ctx->pc = 0x130b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964368));
    // 0x130b18: 0x24c65568  addiu       $a2, $a2, 0x5568
    ctx->pc = 0x130b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21864));
    // 0x130b1c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x130B1Cu;
    SET_GPR_U32(ctx, 31, 0x130B24u);
    ctx->pc = 0x130B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130B1Cu;
    // 0x130b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x130B1Cu, 0x130B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B24u;
label_130b24:
    // 0x130b24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x130b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130b28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130b2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x130b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130b30: 0x3e00008  jr          $ra
    ctx->pc = 0x130B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B30u;
        // 0x130b34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130B38u;
}
