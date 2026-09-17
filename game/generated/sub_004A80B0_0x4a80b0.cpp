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

// Function: sub_004A80B0
// Address: 0x4a80b0 - 0x4a8218
void sub_004A80B0_0x4a80b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A80B0_0x4a80b0");
#endif

    ctx->pc = 0x4a80b0u;

    // 0x4a80b0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4a80b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a80b4: 0x2523002a  addiu       $v1, $t1, 0x2A
    ctx->pc = 0x4a80b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 42));
    // 0x4a80b8: 0x252b0010  addiu       $t3, $t1, 0x10
    ctx->pc = 0x4a80b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x4a80bc: 0x84680000  lh          $t0, 0x0($v1)
    ctx->pc = 0x4a80bcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a80c0: 0x252c0014  addiu       $t4, $t1, 0x14
    ctx->pc = 0x4a80c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
    // 0x4a80c4: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x4a80c4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a80c8: 0x180702d  daddu       $t6, $t4, $zero
    ctx->pc = 0x4a80c8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a80cc: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x4a80ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4a80d0: 0x252a0028  addiu       $t2, $t1, 0x28
    ctx->pc = 0x4a80d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 40));
    // 0x4a80d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a80d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a80d8: 0x24403  sra         $t0, $v0, 16
    ctx->pc = 0x4a80d8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a80dc: 0x5010016  bgez        $t0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4A80DCu;
    {
        const bool branch_taken_0x4a80dc = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x4A80E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A80DCu;
        // 0x4a80e0: 0xa4680000  sh          $t0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a80dc) {
            ctx->pc = 0x4A8138u;
            goto label_4a8138;
        }
    }
    ctx->pc = 0x4A80E4u;
    // 0x4a80e4: 0x9524002c  lhu         $a0, 0x2C($t1)
    ctx->pc = 0x4a80e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x4a80e8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4a80e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4a80ec: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4a80ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4a80f0: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4a80f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4a80f4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4a80f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a80f8: 0x24c60c50  addiu       $a2, $a2, 0xC50
    ctx->pc = 0x4a80f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3152));
    // 0x4a80fc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a80fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a8100: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4a8100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4a8104: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a8104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a8108: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a8108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a810c: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4a810cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4a8110: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x4a8110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x4a8114: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4a8114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4a8118: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4a8118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4a811c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4a811cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4a8120: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4a8120u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4a8124: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4a8124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a8128: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a8128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a812c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4a812cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4a8130: 0x3e00008  jr          $ra
    ctx->pc = 0x4A8130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8130u;
        // 0x4a8134: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8138u;
label_4a8138:
    // 0x4a8138: 0x85480000  lh          $t0, 0x0($t2)
    ctx->pc = 0x4a8138u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4a813c: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x4a813cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4a8140: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a8140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a8144: 0x24403  sra         $t0, $v0, 16
    ctx->pc = 0x4a8144u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a8148: 0x5010025  bgez        $t0, . + 4 + (0x25 << 2)
    ctx->pc = 0x4A8148u;
    {
        const bool branch_taken_0x4a8148 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x4A814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8148u;
        // 0x4a814c: 0xa5480000  sh          $t0, 0x0($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8148) {
            ctx->pc = 0x4A81E0u;
            goto label_4a81e0;
        }
    }
    ctx->pc = 0x4A8150u;
    // 0x4a8150: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4a8150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4a8154: 0x25270026  addiu       $a3, $t1, 0x26
    ctx->pc = 0x4a8154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 38));
    // 0x4a8158: 0x24840c44  addiu       $a0, $a0, 0xC44
    ctx->pc = 0x4a8158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3140));
    // 0x4a815c: 0x84e80000  lh          $t0, 0x0($a3)
    ctx->pc = 0x4a815cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a8160: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a8160u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0C44u));
    // 0x4a8164: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a8164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a8168: 0x1051825  or          $v1, $t0, $a1
    ctx->pc = 0x4a8168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x4a816c: 0x2526002e  addiu       $a2, $t1, 0x2E
    ctx->pc = 0x4a816cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 46));
    // 0x4a8170: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a8170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a8174: 0x25290030  addiu       $t1, $t1, 0x30
    ctx->pc = 0x4a8174u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
    // 0x4a8178: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a8178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a817c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a817cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a8180: 0x84c80000  lh          $t0, 0x0($a2)
    ctx->pc = 0x4a8180u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a8184: 0xa4e80000  sh          $t0, 0x0($a3)
    ctx->pc = 0x4a8184u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x4a8188: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4a8188u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a818c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4a818cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a8190: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4a8190u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a8194: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x4a8194u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a8198: 0x85280000  lh          $t0, 0x0($t1)
    ctx->pc = 0x4a8198u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a819c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a819cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a81a0: 0x1051025  or          $v0, $t0, $a1
    ctx->pc = 0x4a81a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x4a81a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a81a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a81a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a81a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a81ac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a81acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a81b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a81b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a81b4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4a81b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a81b8: 0x38421fff  xori        $v0, $v0, 0x1FFF
    ctx->pc = 0x4a81b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8191);
    // 0x4a81bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a81bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a81c0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a81c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a81c4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4a81c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4a81c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a81c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a81cc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a81ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a81d0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4a81d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a81d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4A81D4u;
    {
        const bool branch_taken_0x4a81d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A81D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A81D4u;
        // 0x4a81d8: 0xa5220000  sh          $v0, 0x0($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a81d4) {
            ctx->pc = 0x4A81E4u;
            goto label_4a81e4;
        }
    }
    ctx->pc = 0x4A81DCu;
    // 0x4a81dc: 0x0  nop
    ctx->pc = 0x4a81dcu;
    // NOP
label_4a81e0:
    // 0x4a81e0: 0x25290030  addiu       $t1, $t1, 0x30
    ctx->pc = 0x4a81e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
label_4a81e4:
    // 0x4a81e4: 0x95240000  lhu         $a0, 0x0($t1)
    ctx->pc = 0x4a81e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a81e8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a81e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a81ec: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4a81ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4a81f0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4a81f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a81f4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a81f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a81f8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4a81f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4a81fc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a81fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a8200: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4a8200u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x4a8204: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x4a8204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4a8208: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4a8208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4a820c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4a820cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4a8210: 0x3e00008  jr          $ra
    ctx->pc = 0x4A8210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8210u;
        // 0x4a8214: 0xadc20000  sw          $v0, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8218u;
}
