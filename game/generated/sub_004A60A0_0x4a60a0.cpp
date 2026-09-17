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

// Function: sub_004A60A0
// Address: 0x4a60a0 - 0x4a6318
void sub_004A60A0_0x4a60a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A60A0_0x4a60a0");
#endif

    switch (ctx->pc) {
        case 0x4a60f4u: goto label_4a60f4;
        case 0x4a61bcu: goto label_4a61bc;
        case 0x4a61dcu: goto label_4a61dc;
        case 0x4a61f0u: goto label_4a61f0;
        default: break;
    }

    ctx->pc = 0x4a60a0u;

    // 0x4a60a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a60a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4a60a4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4a60a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4a60a8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4a60a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a60ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a60acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a60b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a60b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a60b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a60b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a60b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4a60b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4a60bc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4a60bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4a60c0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x4a60c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x4a60c4: 0x8682000e  lh          $v0, 0xE($s4)
    ctx->pc = 0x4a60c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x4a60c8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4a60c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x4a60cc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x4A60CCu;
    {
        const bool branch_taken_0x4a60cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A60D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A60CCu;
        // 0x4a60d0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a60cc) {
            ctx->pc = 0x4A6168u;
            goto label_4a6168;
        }
    }
    ctx->pc = 0x4A60D4u;
    // 0x4a60d4: 0x2682014a  addiu       $v0, $s4, 0x14A
    ctx->pc = 0x4a60d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 330));
    // 0x4a60d8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4a60d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a60dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4a60dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4a60e0: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4a60e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a60e4: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A60E4u;
    {
        const bool branch_taken_0x4a60e4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4A60E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A60E4u;
        // 0x4a60e8: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a60e4) {
            ctx->pc = 0x4A60F4u;
            goto label_4a60f4;
        }
    }
    ctx->pc = 0x4A60ECu;
    // 0x4a60ec: 0xc123392  jal         func_48CE48
    ctx->pc = 0x4A60ECu;
    SET_GPR_U32(ctx, 31, 0x4A60F4u);
    ctx->pc = 0x48CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CE48u, 0x4A60ECu, 0x4A60F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A60F4u;
label_4a60f4:
    // 0x4a60f4: 0x26840128  addiu       $a0, $s4, 0x128
    ctx->pc = 0x4a60f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 296));
    // 0x4a60f8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a60f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a60fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a60fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a6100: 0x26860124  addiu       $a2, $s4, 0x124
    ctx->pc = 0x4a6100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 292));
    // 0x4a6104: 0x26870134  addiu       $a3, $s4, 0x134
    ctx->pc = 0x4a6104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 308));
    // 0x4a6108: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x4a6108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4a610c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4a610cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4a6110: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x4a6110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x4a6114: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4a6114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4a6118: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a6118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a611c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a611cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a6120: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a6120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a6124: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4a6124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4a6128: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4a6128u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a612c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4a612cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a6130: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x4a6130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4a6134: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4a6134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x4a6138: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a6138u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a613c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a613cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a6140: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x4a6140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4a6144: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x4a6144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4a6148: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x4a6148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a614c: 0x22e02  srl         $a1, $v0, 24
    ctx->pc = 0x4a614cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x4a6150: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a6150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a6154: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4a6154u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4a6158: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4a6158u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a615c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4a615cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4a6160: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A6160u;
    {
        const bool branch_taken_0x4a6160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6160u;
        // 0x4a6164: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6160) {
            ctx->pc = 0x4A616Cu;
            goto label_4a616c;
        }
    }
    ctx->pc = 0x4A6168u;
label_4a6168:
    // 0x4a6168: 0x26870134  addiu       $a3, $s4, 0x134
    ctx->pc = 0x4a6168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 308));
label_4a616c:
    // 0x4a616c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x4a616cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6170: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4a6170u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4a6174: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x4a6174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a6178: 0x86840130  lh          $a0, 0x130($s4)
    ctx->pc = 0x4a6178u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x4a617c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4a617cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4a6180: 0x86820132  lh          $v0, 0x132($s4)
    ctx->pc = 0x4a6180u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 306)));
    // 0x4a6184: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a6184u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a6188: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4a6188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4a618c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4a618cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a6190: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a6190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a6194: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x4a6194u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x4a6198: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4a6198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4a619c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x4a619cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x4a61a0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x4a61a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x4a61a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a61a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a61a8: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4a61a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a61ac: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a61acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a61b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a61b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a61b4: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4A61B4u;
    SET_GPR_U32(ctx, 31, 0x4A61BCu);
    ctx->pc = 0x4A61B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A61B4u;
    // 0x4a61b8: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4A61B4u, 0x4A61BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A61BCu;
label_4a61bc:
    // 0x4a61bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4a61bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a61c0: 0x27b20004  addiu       $s2, $sp, 0x4
    ctx->pc = 0x4a61c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4a61c4: 0x27b30008  addiu       $s3, $sp, 0x8
    ctx->pc = 0x4a61c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4a61c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4a61c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a61cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a61ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a61d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a61d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a61d4: 0xc12a7ec  jal         func_4A9FB0
    ctx->pc = 0x4A61D4u;
    SET_GPR_U32(ctx, 31, 0x4A61DCu);
    ctx->pc = 0x4A61D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A61D4u;
    // 0x4a61d8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9FB0u, 0x4A61D4u, 0x4A61DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A61DCu;
label_4a61dc:
    // 0x4a61dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a61dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a61e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4a61e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a61e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a61e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a61e8: 0xc12a7a0  jal         func_4A9E80
    ctx->pc = 0x4A61E8u;
    SET_GPR_U32(ctx, 31, 0x4A61F0u);
    ctx->pc = 0x4A61ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A61E8u;
    // 0x4a61ec: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9E80u, 0x4A61E8u, 0x4A61F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A61F0u;
label_4a61f0:
    // 0x4a61f0: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x4a61f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x4a61f4: 0x87a40000  lh          $a0, 0x0($sp)
    ctx->pc = 0x4a61f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a61f8: 0x268b0010  addiu       $t3, $s4, 0x10
    ctx->pc = 0x4a61f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x4a61fc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4a61fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4a6200: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a6200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6204: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a6204u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a6208: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x4a6208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4a620c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4a620cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a6210: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a6210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a6214: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4a6214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4a6218: 0x87a70004  lh          $a3, 0x4($sp)
    ctx->pc = 0x4a6218u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a621c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a621cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a6220: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x4a6220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a6224: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4a6224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4a6228: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x4a6228u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x4a622c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a622cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a6230: 0x87a90008  lh          $t1, 0x8($sp)
    ctx->pc = 0x4a6230u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a6234: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x4a6234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x4a6238: 0x268a0014  addiu       $t2, $s4, 0x14
    ctx->pc = 0x4a6238u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x4a623c: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x4a623cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6240: 0x268c0018  addiu       $t4, $s4, 0x18
    ctx->pc = 0x4a6240u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x4a6244: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4a6244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4a6248: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x4a6248u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a624c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a624cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a6250: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a6250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a6254: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4a6254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4a6258: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a6258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a625c: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4a625cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x4a6260: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4a6260u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4a6264: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4a6264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4a6268: 0x24077fff  addiu       $a3, $zero, 0x7FFF
    ctx->pc = 0x4a6268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4a626c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x4a626cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x4a6270: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4a6270u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4a6274: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a6274u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a6278: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x4a6278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x4a627c: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x4a627cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x4a6280: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4a6280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4a6284: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4a6284u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a6288: 0x97a40004  lhu         $a0, 0x4($sp)
    ctx->pc = 0x4a6288u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a628c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a628cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a6290: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4a6290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4a6294: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x4a6294u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4a6298: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4a6298u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a629c: 0x1304825  or          $t1, $t1, $s0
    ctx->pc = 0x4a629cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 16));
    // 0x4a62a0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4a62a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4a62a4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a62a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a62a8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a62a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a62ac: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x4a62acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x4a62b0: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x4a62b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x4a62b4: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4a62b4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4a62b8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4a62b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a62bc: 0x97a20008  lhu         $v0, 0x8($sp)
    ctx->pc = 0x4a62bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a62c0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4a62c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4a62c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a62c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a62c8: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4a62c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4a62cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a62ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a62d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a62d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a62d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a62d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a62d8: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4a62d8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4a62dc: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x4a62dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4a62e0: 0xa6820022  sh          $v0, 0x22($s4)
    ctx->pc = 0x4a62e0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a62e4: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x4a62e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x4a62e8: 0xa6830024  sh          $v1, 0x24($s4)
    ctx->pc = 0x4a62e8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a62ec: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x4a62ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4a62f0: 0xa6820026  sh          $v0, 0x26($s4)
    ctx->pc = 0x4a62f0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a62f4: 0x96230012  lhu         $v1, 0x12($s1)
    ctx->pc = 0x4a62f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x4a62f8: 0xa687002c  sh          $a3, 0x2C($s4)
    ctx->pc = 0x4a62f8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 44), (uint16_t)GPR_U32(ctx, 7));
    // 0x4a62fc: 0xa6830028  sh          $v1, 0x28($s4)
    ctx->pc = 0x4a62fcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a6300: 0xa680002a  sh          $zero, 0x2A($s4)
    ctx->pc = 0x4a6300u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a6304: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a6304u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a6308: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4a6308u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a630c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A630Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A630Cu;
        // 0x4a6310: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A630Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A6314u;
    // 0x4a6314: 0x0  nop
    ctx->pc = 0x4a6314u;
    // NOP
    ctx->pc = 0x4a6318u;
}
