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

// Function: sub_004A9140
// Address: 0x4a9140 - 0x4a9218
void sub_004A9140_0x4a9140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9140_0x4a9140");
#endif

    ctx->pc = 0x4a9140u;

    // 0x4a9140: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a9140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a9144: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4a9144u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4a9148: 0x244a0c68  addiu       $t2, $v0, 0xC68
    ctx->pc = 0x4a9148u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 3176));
    // 0x4a914c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4a914cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0C68u));
    // 0x4a9150: 0x84620012  lh          $v0, 0x12($v1)
    ctx->pc = 0x4a9150u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x4a9154: 0x2469000a  addiu       $t1, $v1, 0xA
    ctx->pc = 0x4a9154u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x4a9158: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4A9158u;
    {
        const bool branch_taken_0x4a9158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9158u;
        // 0x4a915c: 0x24650018  addiu       $a1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9158) {
            ctx->pc = 0x4A91A8u;
            goto label_4a91a8;
        }
    }
    ctx->pc = 0x4A9160u;
    // 0x4a9160: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4a9160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4a9164: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a9164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a9168: 0x24840c78  addiu       $a0, $a0, 0xC78
    ctx->pc = 0x4a9168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3192));
    // 0x4a916c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a916cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0C78u));
    // 0x4a9170: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4a9170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4a9174: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a9174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a9178: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a9178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a917c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a917cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a9180: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a9180u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a9184: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a9184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a9188: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a9188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a918c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a918cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a9190: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a9190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a9194: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a9194u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a9198: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4a9198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4a919c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a919cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a91a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A91A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A91A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A91A0u;
        // 0x4a91a4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A91A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A91A8u;
label_4a91a8:
    // 0x4a91a8: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4a91a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a91ac: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4a91acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4a91b0: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x4a91b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4a91b4: 0x24c60c60  addiu       $a2, $a2, 0xC60
    ctx->pc = 0x4a91b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3168));
    // 0x4a91b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a91b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a91bc: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4a91bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4a91c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a91c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a91c4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4a91c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4a91c8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4a91c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4a91cc: 0x24a50c78  addiu       $a1, $a1, 0xC78
    ctx->pc = 0x4a91ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3192));
    // 0x4a91d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a91d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a91d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a91d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a91d8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4a91d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4a91dc: 0x24470002  addiu       $a3, $v0, 0x2
    ctx->pc = 0x4a91dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a91e0: 0xe82024  and         $a0, $a3, $t0
    ctx->pc = 0x4a91e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x4a91e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a91e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a91e8: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x4a91e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x4a91ec: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x4a91ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a91f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a91f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a91f4: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x4a91f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x4a91f8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4a91f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4a91fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a91fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a9200: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a9200u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a9204: 0xa5240000  sh          $a0, 0x0($t1)
    ctx->pc = 0x4a9204u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a9208: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4a9208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4a920c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4a920cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a9210: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9210u;
        // 0x4a9214: 0xa462000c  sh          $v0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9218u;
}
