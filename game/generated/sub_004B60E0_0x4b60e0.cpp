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

// Function: sub_004B60E0
// Address: 0x4b60e0 - 0x4b6308
void sub_004B60E0_0x4b60e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B60E0_0x4b60e0");
#endif

    switch (ctx->pc) {
        case 0x4b6158u: goto label_4b6158;
        case 0x4b61c4u: goto label_4b61c4;
        case 0x4b61e0u: goto label_4b61e0;
        case 0x4b61fcu: goto label_4b61fc;
        case 0x4b6224u: goto label_4b6224;
        case 0x4b622cu: goto label_4b622c;
        case 0x4b6234u: goto label_4b6234;
        case 0x4b6250u: goto label_4b6250;
        case 0x4b6260u: goto label_4b6260;
        case 0x4b6274u: goto label_4b6274;
        default: break;
    }

    ctx->pc = 0x4b60e0u;

    // 0x4b60e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b60e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4b60e4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b60e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b60e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4b60e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4b60ec: 0x24750d30  addiu       $s5, $v1, 0xD30
    ctx->pc = 0x4b60ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 3376));
    // 0x4b60f0: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4b60f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4b60f4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4b60f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b60f8: 0x84a2f980  lh          $v0, -0x680($a1)
    ctx->pc = 0x4b60f8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72F980u));
    // 0x4b60fc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4b60fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4b6100: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x4b6100u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x4b6104: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x4b6104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x4b6108: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b6108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b610c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b610cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b6110: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b6110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b6114: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4b6114u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4b6118: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b6118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b611c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b611cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b6120: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4b6120u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b6124: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b6124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b6128: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4b6128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4b612c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b612cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b6130: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x4b6130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x4b6134: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4b6134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4b6138: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b6138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b613c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4b613cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4b6140: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4b6140u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4b6144: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4b6144u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b6148: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x4B6148u;
    {
        const bool branch_taken_0x4b6148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6148u;
        // 0x4b614c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6148) {
            ctx->pc = 0x4B62E0u;
            goto label_4b62e0;
        }
    }
    ctx->pc = 0x4B6150u;
    // 0x4b6150: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4B6150u;
    SET_GPR_U32(ctx, 31, 0x4B6158u);
    ctx->pc = 0x4B6154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6150u;
    // 0x4b6154: 0x3c13007f  lui         $s3, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4B6150u, 0x4B6158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6158u;
label_4b6158:
    // 0x4b6158: 0x26730d50  addiu       $s3, $s3, 0xD50
    ctx->pc = 0x4b6158u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3408));
    // 0x4b615c: 0x2403005f  addiu       $v1, $zero, 0x5F
    ctx->pc = 0x4b615cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x4b6160: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4b6160u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4b6164: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4b6164u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4b6168: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4b6168u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b616c: 0x26940d3c  addiu       $s4, $s4, 0xD3C
    ctx->pc = 0x4b616cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3388));
    // 0x4b6170: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4b6170u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4b6174: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4b6174u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4b6178: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4b6178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b617c: 0x26520d40  addiu       $s2, $s2, 0xD40
    ctx->pc = 0x4b617cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3392));
    // 0x4b6180: 0x26310d44  addiu       $s1, $s1, 0xD44
    ctx->pc = 0x4b6180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3396));
    // 0x4b6184: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4b6184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4b6188: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4b6188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4b618c: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4b618cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4b6190: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x4b6190u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0D3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D3Cu, _value); } while (0);
    // 0x4b6194: 0x34a50047  ori         $a1, $a1, 0x47
    ctx->pc = 0x4b6194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)71);
    // 0x4b6198: 0x26100d34  addiu       $s0, $s0, 0xD34
    ctx->pc = 0x4b6198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3380));
    // 0x4b619c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4b619cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D40u));
    // 0x4b61a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4b61a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0D44u));
    // 0x4b61a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b61a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b61a8: 0x30430047  andi        $v1, $v0, 0x47
    ctx->pc = 0x4b61a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)71);
    // 0x4b61ac: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4b61acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4b61b0: 0x962024  and         $a0, $a0, $s6
    ctx->pc = 0x4b61b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 22));
    // 0x4b61b4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4b61b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4b61b8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4b61b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4b61bc: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4B61BCu;
    SET_GPR_U32(ctx, 31, 0x4B61C4u);
    ctx->pc = 0x4B61C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B61BCu;
    // 0x4b61c0: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4B61BCu, 0x4B61C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B61C4u;
label_4b61c4:
    // 0x4b61c4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4b61c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b61c8: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x4b61c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x4b61cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b61ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b61d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b61d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b61d4: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4b61d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4b61d8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B61D8u;
    SET_GPR_U32(ctx, 31, 0x4B61E0u);
    ctx->pc = 0x4B61DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B61D8u;
    // 0x4b61dc: 0x86a40000  lh          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B61D8u, 0x4B61E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B61E0u;
label_4b61e0:
    // 0x4b61e0: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4b61e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b61e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b61e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b61e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b61e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b61ec: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b61ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b61f0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4b61f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4b61f4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B61F4u;
    SET_GPR_U32(ctx, 31, 0x4B61FCu);
    ctx->pc = 0x4B61F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B61F4u;
    // 0x4b61f8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B61F4u, 0x4B61FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B61FCu;
label_4b61fc:
    // 0x4b61fc: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4b61fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b6200: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4b6200u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b6204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b6204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6208: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4b6208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b620c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x4b620cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4b6210: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b6210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4b6214: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b6214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4b6218: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4b6218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4b621c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B621Cu;
    SET_GPR_U32(ctx, 31, 0x4B6224u);
    ctx->pc = 0x4B6220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B621Cu;
    // 0x4b6220: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B621Cu, 0x4B6224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6224u;
label_4b6224:
    // 0x4b6224: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B6224u;
    SET_GPR_U32(ctx, 31, 0x4B622Cu);
    ctx->pc = 0x4B6228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6224u;
    // 0x4b6228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B6224u, 0x4B622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B622Cu;
label_4b622c:
    // 0x4b622c: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4B622Cu;
    SET_GPR_U32(ctx, 31, 0x4B6234u);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4B622Cu, 0x4B6234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6234u;
label_4b6234:
    // 0x4b6234: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4b6234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b6238: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x4b6238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x4b623c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b623cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b6240: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b6240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b6244: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4b6244u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4b6248: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B6248u;
    SET_GPR_U32(ctx, 31, 0x4B6250u);
    ctx->pc = 0x4B624Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6248u;
    // 0x4b624c: 0x86a40000  lh          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B6248u, 0x4B6250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6250u;
label_4b6250:
    // 0x4b6250: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b6250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6254: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4b6254u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4b6258: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B6258u;
    SET_GPR_U32(ctx, 31, 0x4B6260u);
    ctx->pc = 0x4B625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6258u;
    // 0x4b625c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B6258u, 0x4B6260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6260u;
label_4b6260:
    // 0x4b6260: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b6260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6264: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4b6264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b6268: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b6268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b626c: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4B626Cu;
    SET_GPR_U32(ctx, 31, 0x4B6274u);
    ctx->pc = 0x4B6270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B626Cu;
    // 0x4b6270: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4B626Cu, 0x4B6274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6274u;
label_4b6274:
    // 0x4b6274: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4b6274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b6278: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4b6278u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b627c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4b627cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4b6280: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b6280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b6284: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b6284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b6288: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b6288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b628c: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x4b628cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x4b6290: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b6290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b6294: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b6294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4b6298: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4b6298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b629c: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4b629cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b62a0: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x4b62a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x4b62a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b62a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b62a8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b62a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b62ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b62acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b62b0: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x4b62b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x4b62b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b62b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b62b8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4b62b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4b62bc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4b62bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b62c0: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4b62c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b62c4: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x4b62c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x4b62c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b62c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b62cc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b62ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b62d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b62d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b62d4: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x4b62d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x4b62d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b62d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b62dc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b62dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4b62e0:
    // 0x4b62e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b62e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b62e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b62e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b62e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b62e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b62ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b62ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b62f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b62f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b62f4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b62f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b62f8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b62f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b62fc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4b62fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b6300: 0x3e00008  jr          $ra
    ctx->pc = 0x4B6300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B6304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6300u;
        // 0x4b6304: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B6300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B6308u;
}
