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

// Function: sub_00512170
// Address: 0x512170 - 0x512218
void sub_00512170_0x512170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512170_0x512170");
#endif

    switch (ctx->pc) {
        case 0x512180u: goto label_512180;
        default: break;
    }

    ctx->pc = 0x512170u;

    // 0x512170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x512170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x512174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x512174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x512178: 0xc144ac0  jal         func_512B00
    ctx->pc = 0x512178u;
    SET_GPR_U32(ctx, 31, 0x512180u);
    ctx->pc = 0x512B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512B00u, 0x512178u, 0x512180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x512180u;
label_512180:
    // 0x512180: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x512180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x512184: 0xa440000e  sh          $zero, 0xE($v0)
    ctx->pc = 0x512184u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x512188: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x512188u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x51218c: 0x24480010  addiu       $t0, $v0, 0x10
    ctx->pc = 0x51218cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x512190: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x512190u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x512194: 0x3c04ff56  lui         $a0, 0xFF56
    ctx->pc = 0x512194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65366 << 16));
    // 0x512198: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x512198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x51219c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x51219cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x5121a0: 0x24490014  addiu       $t1, $v0, 0x14
    ctx->pc = 0x5121a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x5121a4: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x5121a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x5121a8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x5121a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x5121ac: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x5121acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x5121b0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x5121b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x5121b4: 0x244a0018  addiu       $t2, $v0, 0x18
    ctx->pc = 0x5121b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x5121b8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x5121b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x5121bc: 0x24080078  addiu       $t0, $zero, 0x78
    ctx->pc = 0x5121bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x5121c0: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x5121c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x5121c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x5121c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5121c8: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x5121c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x5121cc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x5121ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x5121d0: 0x240c02ee  addiu       $t4, $zero, 0x2EE
    ctx->pc = 0x5121d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
    // 0x5121d4: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x5121d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x5121d8: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x5121d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x5121dc: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x5121dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x5121e0: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x5121e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x5121e4: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x5121e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x5121e8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x5121e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x5121ec: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x5121ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x5121f0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x5121f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x5121f4: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x5121f4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x5121f8: 0xa448002a  sh          $t0, 0x2A($v0)
    ctx->pc = 0x5121f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 8));
    // 0x5121fc: 0xa44c000c  sh          $t4, 0xC($v0)
    ctx->pc = 0x5121fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 12));
    // 0x512200: 0xa44d0022  sh          $t5, 0x22($v0)
    ctx->pc = 0x512200u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 13));
    // 0x512204: 0xa44b0024  sh          $t3, 0x24($v0)
    ctx->pc = 0x512204u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 11));
    // 0x512208: 0xa4400026  sh          $zero, 0x26($v0)
    ctx->pc = 0x512208u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x51220c: 0xa4400028  sh          $zero, 0x28($v0)
    ctx->pc = 0x51220cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x512210: 0x3e00008  jr          $ra
    ctx->pc = 0x512210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512210u;
        // 0x512214: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512218u;
}
