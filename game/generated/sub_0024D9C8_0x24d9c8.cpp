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

// Function: sub_0024D9C8
// Address: 0x24d9c8 - 0x24da30
void sub_0024D9C8_0x24d9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D9C8_0x24d9c8");
#endif

    switch (ctx->pc) {
        case 0x24d9f4u: goto label_24d9f4;
        default: break;
    }

    ctx->pc = 0x24d9c8u;

    // 0x24d9c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24d9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24d9cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24d9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24d9d0: 0x30923ff0  andi        $s2, $a0, 0x3FF0
    ctx->pc = 0x24d9d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16368);
    // 0x24d9d4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x24d9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x24d9d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24d9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24d9dc: 0x3484d000  ori         $a0, $a0, 0xD000
    ctx->pc = 0x24d9dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    // 0x24d9e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24d9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24d9e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24d9e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d9e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24d9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x24d9ec: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x24D9ECu;
    SET_GPR_U32(ctx, 31, 0x24D9F4u);
    ctx->pc = 0x24D9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D9ECu;
    // 0x24d9f0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x24D9ECu, 0x24D9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D9F4u;
label_24d9f4:
    // 0x24d9f4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x24d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x24d9f8: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x24d9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x24d9fc: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x24d9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
    // 0x24da00: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x24da00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x24da04: 0xac700010  sw          $s0, 0x10($v1)
    ctx->pc = 0x24da04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 16));
    // 0x24da08: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x24da08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x24da0c: 0xac720080  sw          $s2, 0x80($v1)
    ctx->pc = 0x24da0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 18));
    // 0x24da10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24da10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24da14: 0xac710020  sw          $s1, 0x20($v1)
    ctx->pc = 0x24da14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 17));
    // 0x24da18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24da18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24da1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24da1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24da20: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24da20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24da24: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24da24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x24da28: 0x3e00008  jr          $ra
    ctx->pc = 0x24DA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA28u;
        // 0x24da2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DA30u;
}
