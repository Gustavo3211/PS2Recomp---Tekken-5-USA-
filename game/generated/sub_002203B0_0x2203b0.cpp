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

// Function: sub_002203B0
// Address: 0x2203b0 - 0x220458
void sub_002203B0_0x2203b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002203B0_0x2203b0");
#endif

    switch (ctx->pc) {
        case 0x2203fcu: goto label_2203fc;
        case 0x220420u: goto label_220420;
        case 0x220430u: goto label_220430;
        default: break;
    }

    ctx->pc = 0x2203b0u;

    // 0x2203b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2203b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2203b4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2203b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2203b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2203bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2203bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2203c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2203c4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2203c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2203c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2203cc: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x2203ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x2203d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2203d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2203d4: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2203d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2203d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2203d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2203dc: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x2203dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2203e0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2203e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2203e4: 0x24672d30  addiu       $a3, $v1, 0x2D30
    ctx->pc = 0x2203e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 11568));
    // 0x2203e8: 0x34c6000e  ori         $a2, $a2, 0xE
    ctx->pc = 0x2203e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)14);
    // 0x2203ec: 0x80530008  lb          $s3, 0x8($v0)
    ctx->pc = 0x2203ecu;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2203f0: 0x84500006  lh          $s0, 0x6($v0)
    ctx->pc = 0x2203f0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2203f4: 0xc089248  jal         func_224920
    ctx->pc = 0x2203F4u;
    SET_GPR_U32(ctx, 31, 0x2203FCu);
    ctx->pc = 0x2203F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203F4u;
    // 0x2203f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x2203F4u, 0x2203FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203FCu;
label_2203fc:
    // 0x2203fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2203fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220400: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x220400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x220404: 0xae930054  sw          $s3, 0x54($s4)
    ctx->pc = 0x220404u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 19));
    // 0x220408: 0xae920018  sw          $s2, 0x18($s4)
    ctx->pc = 0x220408u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 18));
    // 0x22040c: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x22040cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x220410: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220410u;
    {
        const bool branch_taken_0x220410 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x220414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220410u;
        // 0x220414: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220410) {
            ctx->pc = 0x220428u;
            goto label_220428;
        }
    }
    ctx->pc = 0x220418u;
    // 0x220418: 0xc0ae4a4  jal         func_2B9290
    ctx->pc = 0x220418u;
    SET_GPR_U32(ctx, 31, 0x220420u);
    ctx->pc = 0x2B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9290u, 0x220418u, 0x220420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220420u;
label_220420:
    // 0x220420: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x220420u;
    {
        const bool branch_taken_0x220420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220420u;
        // 0x220424: 0xae82005c  sw          $v0, 0x5C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220420) {
            ctx->pc = 0x220434u;
            goto label_220434;
        }
    }
    ctx->pc = 0x220428u;
label_220428:
    // 0x220428: 0xc0ae4a8  jal         func_2B92A0
    ctx->pc = 0x220428u;
    SET_GPR_U32(ctx, 31, 0x220430u);
    ctx->pc = 0x2B92A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92A0u, 0x220428u, 0x220430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220430u;
label_220430:
    // 0x220430: 0xae82005c  sw          $v0, 0x5C($s4)
    ctx->pc = 0x220430u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
label_220434:
    // 0x220434: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220438: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x220438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22043c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22043cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220440: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x220440u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220444: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x220444u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220448: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x220448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22044c: 0x3e00008  jr          $ra
    ctx->pc = 0x22044Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22044Cu;
        // 0x220450: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22044Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220454u;
    // 0x220454: 0x0  nop
    ctx->pc = 0x220454u;
    // NOP
    ctx->pc = 0x220458u;
}
