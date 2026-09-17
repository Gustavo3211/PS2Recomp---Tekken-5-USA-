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

// Function: sub_004AB130
// Address: 0x4ab130 - 0x4ab328
void sub_004AB130_0x4ab130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AB130_0x4ab130");
#endif

    switch (ctx->pc) {
        case 0x4ab1dcu: goto label_4ab1dc;
        case 0x4ab26cu: goto label_4ab26c;
        case 0x4ab2a0u: goto label_4ab2a0;
        default: break;
    }

    ctx->pc = 0x4ab130u;

    // 0x4ab130: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4ab130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4ab134: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ab134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ab138: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4ab138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4ab13c: 0x24500c98  addiu       $s0, $v0, 0xC98
    ctx->pc = 0x4ab13cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3224));
    // 0x4ab140: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4ab140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4ab144: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4ab144u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4ab148: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4ab148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4ab14c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4ab14cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4ab150: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4ab150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4ab154: 0x24f30c9c  addiu       $s3, $a3, 0xC9C
    ctx->pc = 0x4ab154u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 3228));
    // 0x4ab158: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4ab158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4ab15c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4ab15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4ab160: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4ab160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4ab164: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4ab164u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4ab168: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4ab168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4ab16c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x4ab16cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab170: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4ab170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4ab174: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x4ab174u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab178: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4ab178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4ab17c: 0x26d20ca0  addiu       $s2, $s6, 0xCA0
    ctx->pc = 0x4ab17cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 3232));
    // 0x4ab180: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4ab180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4ab184: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ab184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ab188: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ab188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ab18c: 0x24b50c88  addiu       $s5, $a1, 0xC88
    ctx->pc = 0x4ab18cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 3208));
    // 0x4ab190: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ab190u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0C98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0C98u, _value); } while (0);
    // 0x4ab194: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ab194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ab198: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x4ab198u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab19c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ab19cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0C98u));
    // 0x4ab1a0: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x4ab1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4ab1a4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x4ab1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x4ab1a8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ab1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ab1ac: 0xace60c9c  sw          $a2, 0xC9C($a3)
    ctx->pc = 0x4ab1acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7F0C9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0C9Cu, _value); } while (0);
    // 0x4ab1b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ab1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ab1b4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ab1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ab1b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ab1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ab1bc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ab1bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ab1c0: 0x2442ffe4  addiu       $v0, $v0, -0x1C
    ctx->pc = 0x4ab1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x4ab1c4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ab1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ab1c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ab1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ab1cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ab1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ab1d0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4ab1d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4ab1d4: 0xc12a6c8  jal         func_4A9B20
    ctx->pc = 0x4AB1D4u;
    SET_GPR_U32(ctx, 31, 0x4AB1DCu);
    ctx->pc = 0x4AB1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB1D4u;
    // 0x4ab1d8: 0xae840000  sw          $a0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9B20u, 0x4AB1D4u, 0x4AB1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB1DCu;
label_4ab1dc:
    // 0x4ab1dc: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4ab1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4ab1e0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4ab1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ab1e4: 0x24880c8c  addiu       $t0, $a0, 0xC8C
    ctx->pc = 0x4ab1e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 3212));
    // 0x4ab1e8: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4ab1e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ab1ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ab1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab1f0: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x4ab1f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ab1f4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4ab1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4ab1f8: 0xd13024  and         $a2, $a2, $s1
    ctx->pc = 0x4ab1f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x4ab1fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ab1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ab200: 0x28a304b7  slti        $v1, $a1, 0x4B7
    ctx->pc = 0x4ab200u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1207) ? 1 : 0);
    // 0x4ab204: 0x28a50031  slti        $a1, $a1, 0x31
    ctx->pc = 0x4ab204u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x4ab208: 0x34c70006  ori         $a3, $a2, 0x6
    ctx->pc = 0x4ab208u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)6);
    // 0x4ab20c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4ab20cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4ab210: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AB210u;
    {
        const bool branch_taken_0x4ab210 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB210u;
        // 0x4ab214: 0xae860000  sw          $a2, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab210) {
            ctx->pc = 0x4AB220u;
            goto label_4ab220;
        }
    }
    ctx->pc = 0x4AB218u;
    // 0x4ab218: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4AB218u;
    {
        const bool branch_taken_0x4ab218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB218u;
        // 0x4ab21c: 0xae870000  sw          $a3, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab218) {
            ctx->pc = 0x4AB230u;
            goto label_4ab230;
        }
    }
    ctx->pc = 0x4AB220u;
label_4ab220:
    // 0x4ab220: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AB220u;
    {
        const bool branch_taken_0x4ab220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab220) {
            ctx->pc = 0x4AB224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AB220u;
            // 0x4ab224: 0x8ec60ca0  lw          $a2, 0xCA0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AB234u;
            goto label_4ab234;
        }
    }
    ctx->pc = 0x4AB228u;
    // 0x4ab228: 0x34c20004  ori         $v0, $a2, 0x4
    ctx->pc = 0x4ab228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x4ab22c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4ab22cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_4ab230:
    // 0x4ab230: 0x8ec60ca0  lw          $a2, 0xCA0($s6)
    ctx->pc = 0x4ab230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3232)));
label_4ab234:
    // 0x4ab234: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4ab234u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4ab238: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4ab238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ab23c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4ab23cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ab240: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ab240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ab244: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x4ab244u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ab248: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ab248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4ab24c: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x4ab24cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ab250: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ab250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ab254: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4ab254u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4ab258: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4ab258u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ab25c: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x4ab25cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4ab260: 0xe52804  sllv        $a1, $a1, $a3
    ctx->pc = 0x4ab260u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x4ab264: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4AB264u;
    SET_GPR_U32(ctx, 31, 0x4AB26Cu);
    ctx->pc = 0x4AB268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB264u;
    // 0x4ab268: 0xae650000  sw          $a1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AB264u, 0x4AB26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB26Cu;
label_4ab26c:
    // 0x4ab26c: 0x171400  sll         $v0, $s7, 16
    ctx->pc = 0x4ab26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x4ab270: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4AB270u;
    {
        const bool branch_taken_0x4ab270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB270u;
        // 0x4ab274: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab270) {
            ctx->pc = 0x4AB2C0u;
            goto label_4ab2c0;
        }
    }
    ctx->pc = 0x4AB278u;
    // 0x4ab278: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x4ab278u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ab27c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4ab27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ab280: 0x96650000  lhu         $a1, 0x0($s3)
    ctx->pc = 0x4ab280u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ab284: 0x61b80  sll         $v1, $a2, 14
    ctx->pc = 0x4ab284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 14));
    // 0x4ab288: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4ab288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4ab28c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4ab28cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4ab290: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ab290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ab294: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4ab294u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4ab298: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4AB298u;
    SET_GPR_U32(ctx, 31, 0x4AB2A0u);
    ctx->pc = 0x4AB29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB298u;
    // 0x4ab29c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AB298u, 0x4AB2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB2A0u;
label_4ab2a0:
    // 0x4ab2a0: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4ab2a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ab2a4: 0x86a40000  lh          $a0, 0x0($s5)
    ctx->pc = 0x4ab2a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ab2a8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4ab2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ab2ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4ab2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4ab2b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ab2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ab2b4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ab2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4ab2b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ab2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ab2bc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4ab2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4ab2c0:
    // 0x4ab2c0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ab2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ab2c4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4ab2c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ab2c8: 0x24440c98  addiu       $a0, $v0, 0xC98
    ctx->pc = 0x4ab2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3224));
    // 0x4ab2cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4ab2ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ab2d0: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4ab2d0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7F0C98u));
    // 0x4ab2d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ab2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0C98u));
    // 0x4ab2d8: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x4ab2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x4ab2dc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4ab2dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ab2e0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ab2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4ab2e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4ab2e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ab2e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ab2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ab2ec: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4ab2ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ab2f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ab2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ab2f4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4ab2f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ab2f8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4ab2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4ab2fc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4ab2fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4ab300: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4ab300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ab304: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4ab304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4ab308: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4ab308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4ab30c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4ab30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ab310: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4ab310u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ab314: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x4ab314u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x4ab318: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4ab318u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4ab31c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB31Cu;
        // 0x4ab320: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB324u;
    // 0x4ab324: 0x0  nop
    ctx->pc = 0x4ab324u;
    // NOP
    ctx->pc = 0x4ab328u;
}
