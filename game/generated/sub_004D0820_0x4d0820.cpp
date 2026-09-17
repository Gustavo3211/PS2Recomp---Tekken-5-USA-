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

// Function: sub_004D0820
// Address: 0x4d0820 - 0x4d1500
void sub_004D0820_0x4d0820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D0820_0x4d0820");
#endif

    switch (ctx->pc) {
        case 0x4d0824u: goto label_4d0824;
        case 0x4d0838u: goto label_4d0838;
        case 0x4d08d0u: goto label_4d08d0;
        case 0x4d08d8u: goto label_4d08d8;
        case 0x4d09e0u: goto label_4d09e0;
        case 0x4d0a68u: goto label_4d0a68;
        case 0x4d0accu: goto label_4d0acc;
        case 0x4d0ae8u: goto label_4d0ae8;
        case 0x4d0af0u: goto label_4d0af0;
        case 0x4d0b70u: goto label_4d0b70;
        case 0x4d0ba4u: goto label_4d0ba4;
        case 0x4d0c08u: goto label_4d0c08;
        case 0x4d0c38u: goto label_4d0c38;
        case 0x4d0c4cu: goto label_4d0c4c;
        case 0x4d0d04u: goto label_4d0d04;
        case 0x4d0e38u: goto label_4d0e38;
        case 0x4d0e88u: goto label_4d0e88;
        case 0x4d0f00u: goto label_4d0f00;
        case 0x4d1048u: goto label_4d1048;
        case 0x4d10d8u: goto label_4d10d8;
        case 0x4d1168u: goto label_4d1168;
        case 0x4d11a8u: goto label_4d11a8;
        case 0x4d11e8u: goto label_4d11e8;
        case 0x4d1230u: goto label_4d1230;
        case 0x4d1240u: goto label_4d1240;
        case 0x4d1248u: goto label_4d1248;
        case 0x4d12a0u: goto label_4d12a0;
        case 0x4d1368u: goto label_4d1368;
        case 0x4d13a4u: goto label_4d13a4;
        case 0x4d1428u: goto label_4d1428;
        case 0x4d1464u: goto label_4d1464;
        case 0x4d14d4u: goto label_4d14d4;
        case 0x4d14f0u: goto label_4d14f0;
        default: break;
    }

    ctx->pc = 0x4d0820u;

    // 0x4d0820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d0820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d0824:
    // 0x4d0824: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d0824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d0828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d0828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d082c: 0x3e00008  jr          $ra
    ctx->pc = 0x4D082Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D0830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D082Cu;
        // 0x4d0830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D082Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D0834u;
    // 0x4d0834: 0x0  nop
    ctx->pc = 0x4d0834u;
    // NOP
label_4d0838:
    // 0x4d0838: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d0838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4d083c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d083cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d0840: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4d0840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4d0844: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4d0844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4d0848: 0x24491004  addiu       $t1, $v0, 0x1004
    ctx->pc = 0x4d0848u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4100));
    // 0x4d084c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4d084cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4d0850: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4d0850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4d0854: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4d0854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4d0858: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x4d0858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x4d085c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4d085cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4d0860: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4d0860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4d0864: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4d0864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4d0868: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4d0868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4d086c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4d086cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4d0870: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4d0870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4d0874: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4d0874u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1004u));
    // 0x4d0878: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d0878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d087c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d087cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d0880: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4d0880u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4d0884: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4d0884u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d0888: 0x4600065  bltz        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x4D0888u;
    {
        const bool branch_taken_0x4d0888 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4D088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0888u;
        // 0x4d088c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0888) {
            ctx->pc = 0x4D0A20u;
            goto label_4d0a20;
        }
    }
    ctx->pc = 0x4D0890u;
    // 0x4d0890: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d0890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d0894: 0x26430028  addiu       $v1, $s2, 0x28
    ctx->pc = 0x4d0894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x4d0898: 0x24530fec  addiu       $s3, $v0, 0xFEC
    ctx->pc = 0x4d0898u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4076));
    // 0x4d089c: 0x26420026  addiu       $v0, $s2, 0x26
    ctx->pc = 0x4d089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 38));
    // 0x4d08a0: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4d08a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4d08a4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d08a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4d08a8: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d08a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4d08ac: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4d08acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4d08b0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4d08b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4d08b4: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x4d08b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d08b8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4d08b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4d08bc: 0x24960ff8  addiu       $s6, $a0, 0xFF8
    ctx->pc = 0x4d08bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4088));
    // 0x4d08c0: 0x24b70ffc  addiu       $s7, $a1, 0xFFC
    ctx->pc = 0x4d08c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 4092));
    // 0x4d08c4: 0x24d51000  addiu       $s5, $a2, 0x1000
    ctx->pc = 0x4d08c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 4096));
    // 0x4d08c8: 0x24fe0ff0  addiu       $fp, $a3, 0xFF0
    ctx->pc = 0x4d08c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 4080));
    // 0x4d08cc: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4d08ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_4d08d0:
    // 0x4d08d0: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4D08D0u;
    SET_GPR_U32(ctx, 31, 0x4D08D8u);
    ctx->pc = 0x4D08D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D08D0u;
    // 0x4d08d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4D08D0u, 0x4D08D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D08D8u;
label_4d08d8:
    // 0x4d08d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4d08d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d08dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4d08dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d08e0: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x4d08e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x4d08e4: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x4d08e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d08e8: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x4d08e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
    // 0x4d08ec: 0x24e773e8  addiu       $a3, $a3, 0x73E8
    ctx->pc = 0x4d08ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29672));
    // 0x4d08f0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4d08f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d08f4: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4d08f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d08f8: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4d08f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d08fc: 0xa60201be  sh          $v0, 0x1BE($s0)
    ctx->pc = 0x4d08fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 446), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d0900: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x4d0900u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d0904: 0xae120140  sw          $s2, 0x140($s0)
    ctx->pc = 0x4d0904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 18));
    // 0x4d0908: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d0908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d090c: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4d090cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d0910: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4d0910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4d0914: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d0914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4d0918: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d0918u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4d091c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d091cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d0920: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4d0920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d0924: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4d0924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4d0928: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d0928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d092c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d092cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d0930: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d0930u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4d0934: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4d0934u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d0938: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d0938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d093c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d093cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4d0940: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d0940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4d0944: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4d0944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4d0948: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4d0948u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d094c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d094cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d0950: 0xa6030162  sh          $v1, 0x162($s0)
    ctx->pc = 0x4d0950u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d0954: 0x84490000  lh          $t1, 0x0($v0)
    ctx->pc = 0x4d0954u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d0958: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d0958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d095c: 0x844a0002  lh          $t2, 0x2($v0)
    ctx->pc = 0x4d095cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4d0960: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4d0960u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d0964: 0x1314825  or          $t1, $t1, $s1
    ctx->pc = 0x4d0964u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 17));
    // 0x4d0968: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x4d0968u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4d096c: 0x1515025  or          $t2, $t2, $s1
    ctx->pc = 0x4d096cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 17));
    // 0x4d0970: 0x8ee70000  lw          $a3, 0x0($s7)
    ctx->pc = 0x4d0970u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4d0974: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4d0974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4d0978: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4d0978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d097c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4d097cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4d0980: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d0980u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d0984: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x4d0984u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x4d0988: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d0988u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d098c: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4d098cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4d0990: 0xca3024  and         $a2, $a2, $t2
    ctx->pc = 0x4d0990u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
    // 0x4d0994: 0xaec80000  sw          $t0, 0x0($s6)
    ctx->pc = 0x4d0994u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 8));
    // 0x4d0998: 0xaee70000  sw          $a3, 0x0($s7)
    ctx->pc = 0x4d0998u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 7));
    // 0x4d099c: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4d099cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x4d09a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4d09a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d09a4: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4d09a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d09a8: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4d09a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d09ac: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d09acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d09b0: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x4d09b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d09b4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d09b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d09b8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d09b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4d09bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d09bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d09c0: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4d09c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4d09c4: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x4d09c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4d09c8: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4d09c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d09cc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d09ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d09d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d09d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d09d4: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x4d09d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x4d09d8: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4D09D8u;
    SET_GPR_U32(ctx, 31, 0x4D09E0u);
    ctx->pc = 0x4D09DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D09D8u;
    // 0x4d09dc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4D09D8u, 0x4D09E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D09E0u;
label_4d09e0:
    // 0x4d09e0: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4d09e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4d09e4: 0xa6020164  sh          $v0, 0x164($s0)
    ctx->pc = 0x4d09e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 356), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d09e8: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x4d09e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4d09ec: 0xa6030166  sh          $v1, 0x166($s0)
    ctx->pc = 0x4d09ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d09f0: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4d09f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d09f4: 0xa6020168  sh          $v0, 0x168($s0)
    ctx->pc = 0x4d09f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d09f8: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4d09f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d09fc: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4d09fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d0a00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4d0a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4d0a04: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d0a04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4d0a08: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4d0a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4d0a0c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4d0a0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4d0a10: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4d0a10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4d0a14: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4d0a14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d0a18: 0x441ffad  bgez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x4D0A18u;
    {
        const bool branch_taken_0x4d0a18 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4d0a18) {
            ctx->pc = 0x4D08D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d08d0;
        }
    }
    ctx->pc = 0x4D0A20u;
label_4d0a20:
    // 0x4d0a20: 0x264301bc  addiu       $v1, $s2, 0x1BC
    ctx->pc = 0x4d0a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 444));
    // 0x4d0a24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d0a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0a28: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d0a28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d0a2c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4d0a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d0a30: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4d0a30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d0a34: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d0a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d0a38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4d0a38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d0a3c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4d0a3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d0a40: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4d0a40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d0a44: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4d0a44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d0a48: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4d0a48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d0a4c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4d0a4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d0a50: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4d0a50u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4d0a54: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4d0a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4d0a58: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d0a58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d0a5c: 0x813429a  j           func_4D0A68
    ctx->pc = 0x4D0A5Cu;
    ctx->pc = 0x4D0A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0A5Cu;
    // 0x4d0a60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D0A68u;
    goto label_4d0a68;
    ctx->pc = 0x4D0A64u;
    // 0x4d0a64: 0x0  nop
    ctx->pc = 0x4d0a64u;
    // NOP
label_4d0a68:
    // 0x4d0a68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d0a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d0a6c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d0a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4d0a70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d0a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d0a74: 0x24c60fec  addiu       $a2, $a2, 0xFEC
    ctx->pc = 0x4d0a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4076));
    // 0x4d0a78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d0a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d0a7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d0a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0a80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d0a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d0a84: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d0a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d0a88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d0a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d0a8c: 0x24501004  addiu       $s0, $v0, 0x1004
    ctx->pc = 0x4d0a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4100));
    // 0x4d0a90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d0a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4d0a94: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4d0a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4d0a98: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x4d0a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x4d0a9c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4d0a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4d0aa0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4d0aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0FECu));
    // 0x4d0aa4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4d0aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1004u));
    // 0x4d0aa8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d0aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d0aac: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x4d0aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4d0ab0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4d0ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4d0ab4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4d0ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4d0ab8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4d0ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4d0abc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4d0abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4d0ac0: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x4d0ac0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d0ac4: 0xc12b638  jal         func_4AD8E0
    ctx->pc = 0x4D0AC4u;
    SET_GPR_U32(ctx, 31, 0x4D0ACCu);
    ctx->pc = 0x4D0AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0AC4u;
    // 0x4d0ac8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x4D0AC4u, 0x4D0ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0ACCu;
label_4d0acc:
    // 0x4d0acc: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x4D0ACCu;
    {
        const bool branch_taken_0x4d0acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0acc) {
            ctx->pc = 0x4D0AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D0ACCu;
            // 0x4d0ad0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D0B58u;
            goto label_4d0b58;
        }
    }
    ctx->pc = 0x4D0AD4u;
    // 0x4d0ad4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d0ad4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d0ad8: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4D0AD8u;
    {
        const bool branch_taken_0x4d0ad8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4D0ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0AD8u;
        // 0x4d0adc: 0x24130046  addiu       $s3, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0ad8) {
            ctx->pc = 0x4D0B28u;
            goto label_4d0b28;
        }
    }
    ctx->pc = 0x4D0AE0u;
    // 0x4d0ae0: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4d0ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4d0ae4: 0x0  nop
    ctx->pc = 0x4d0ae4u;
    // NOP
label_4d0ae8:
    // 0x4d0ae8: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4D0AE8u;
    SET_GPR_U32(ctx, 31, 0x4D0AF0u);
    ctx->pc = 0x4D0AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0AE8u;
    // 0x4d0aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4D0AE8u, 0x4D0AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0AF0u;
label_4d0af0:
    // 0x4d0af0: 0xa4530008  sh          $s3, 0x8($v0)
    ctx->pc = 0x4d0af0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 19));
    // 0x4d0af4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4d0af4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d0af8: 0xac510140  sw          $s1, 0x140($v0)
    ctx->pc = 0x4d0af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 17));
    // 0x4d0afc: 0xa44301be  sh          $v1, 0x1BE($v0)
    ctx->pc = 0x4d0afcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d0b00: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d0b00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d0b04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d0b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d0b08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4d0b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4d0b0c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d0b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d0b10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d0b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d0b14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d0b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d0b18: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d0b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d0b1c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d0b1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d0b20: 0x441fff1  bgez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x4D0B20u;
    {
        const bool branch_taken_0x4d0b20 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4d0b20) {
            ctx->pc = 0x4D0AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d0ae8;
        }
    }
    ctx->pc = 0x4D0B28u;
label_4d0b28:
    // 0x4d0b28: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4d0b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4d0b2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d0b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0b30: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d0b30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d0b34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d0b34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d0b38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d0b38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d0b3c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d0b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d0b40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d0b40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d0b44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d0b44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d0b48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d0b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d0b4c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d0b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d0b50: 0x81342dc  j           func_4D0B70
    ctx->pc = 0x4D0B50u;
    ctx->pc = 0x4D0B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0B50u;
    // 0x4d0b54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D0B70u;
    goto label_4d0b70;
    ctx->pc = 0x4D0B58u;
label_4d0b58:
    // 0x4d0b58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d0b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d0b5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d0b5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d0b60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d0b60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d0b64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d0b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d0b68: 0x3e00008  jr          $ra
    ctx->pc = 0x4D0B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D0B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0B68u;
        // 0x4d0b6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D0B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D0B70u;
label_4d0b70:
    // 0x4d0b70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d0b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4d0b74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d0b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d0b78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d0b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d0b7c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4d0b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4d0b80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d0b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d0b84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d0b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d0b88: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d0b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d0b8c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d0b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4d0b90: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4d0b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4d0b94: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4d0b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4d0b98: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4d0b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4d0b9c: 0xc13e3f0  jal         func_4F8FC0
    ctx->pc = 0x4D0B9Cu;
    SET_GPR_U32(ctx, 31, 0x4D0BA4u);
    ctx->pc = 0x4D0BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0B9Cu;
    // 0x4d0ba0: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FC0u, 0x4D0B9Cu, 0x4D0BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0BA4u;
label_4d0ba4:
    // 0x4d0ba4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4d0ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0ba8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d0ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d0bac: 0x24461004  addiu       $a2, $v0, 0x1004
    ctx->pc = 0x4d0bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4100));
    // 0x4d0bb0: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x4d0bb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d0bb4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4d0bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1004u));
    // 0x4d0bb8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d0bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d0bbc: 0x24700fec  addiu       $s0, $v1, 0xFEC
    ctx->pc = 0x4d0bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4076));
    // 0x4d0bc0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4d0bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4d0bc4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d0bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0FECu));
    // 0x4d0bc8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4d0bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x4d0bcc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d0bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d0bd0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4d0bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4d0bd4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4d0bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4d0bd8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x4d0bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4d0bdc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4d0bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4d0be0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4d0be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4d0be4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d0be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d0be8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d0be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d0bec: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d0becu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d0bf0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4d0bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4d0bf4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4d0bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4d0bf8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d0bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d0bfc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d0bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d0c00: 0xc12b638  jal         func_4AD8E0
    ctx->pc = 0x4D0C00u;
    SET_GPR_U32(ctx, 31, 0x4D0C08u);
    ctx->pc = 0x4D0C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0C00u;
    // 0x4d0c04: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x4D0C00u, 0x4D0C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0C08u;
label_4d0c08:
    // 0x4d0c08: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x4D0C08u;
    {
        const bool branch_taken_0x4d0c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0C08u;
        // 0x4d0c0c: 0x3c04007f  lui         $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0c08) {
            ctx->pc = 0x4D0E08u;
            goto label_4d0e08;
        }
    }
    ctx->pc = 0x4D0C10u;
    // 0x4d0c10: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4d0c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4d0c14: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d0c14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4d0c18: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x4d0c18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0c1c: 0x8c550004  lw          $s5, 0x4($v0)
    ctx->pc = 0x4d0c1cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4d0c20: 0x249e0ff8  addiu       $fp, $a0, 0xFF8
    ctx->pc = 0x4d0c20u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 4088));
    // 0x4d0c24: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x4d0c24u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d0c28: 0x24d71000  addiu       $s7, $a2, 0x1000
    ctx->pc = 0x4d0c28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), 4096));
    // 0x4d0c2c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4d0c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x4d0c30: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4d0c30u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4d0c34: 0x0  nop
    ctx->pc = 0x4d0c34u;
    // NOP
label_4d0c38:
    // 0x4d0c38: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4d0c38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d0c3c: 0x4400052  bltz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x4D0C3Cu;
    {
        const bool branch_taken_0x4d0c3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4D0C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0C3Cu;
        // 0x4d0c40: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0c3c) {
            ctx->pc = 0x4D0D88u;
            goto label_4d0d88;
        }
    }
    ctx->pc = 0x4D0C44u;
    // 0x4d0c44: 0xc12b5f2  jal         func_4AD7C8
    ctx->pc = 0x4D0C44u;
    SET_GPR_U32(ctx, 31, 0x4D0C4Cu);
    ctx->pc = 0x4D0C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0C44u;
    // 0x4d0c48: 0x86710000  lh          $s1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD7C8u, 0x4D0C44u, 0x4D0C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0C4Cu;
label_4d0c4c:
    // 0x4d0c4c: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x4d0c4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d0c50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4d0c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0c54: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d0c54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4d0c58: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x4d0c58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d0c5c: 0x24c60ffc  addiu       $a2, $a2, 0xFFC
    ctx->pc = 0x4d0c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4092));
    // 0x4d0c60: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4d0c60u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4d0c64: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4d0c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0c68: 0x96a20002  lhu         $v0, 0x2($s5)
    ctx->pc = 0x4d0c68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x4d0c6c: 0x25290ff0  addiu       $t1, $t1, 0xFF0
    ctx->pc = 0x4d0c6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4080));
    // 0x4d0c70: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4d0c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0c74: 0x2328825  or          $s1, $s1, $s2
    ctx->pc = 0x4d0c74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 18));
    // 0x4d0c78: 0xa60201be  sh          $v0, 0x1BE($s0)
    ctx->pc = 0x4d0c78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 446), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d0c7c: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4d0c7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d0c80: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4d0c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d0c84: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4d0c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4d0c88: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x4d0c88u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0FFCu));
    // 0x4d0c8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d0c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d0c90: 0x8ee80000  lw          $t0, 0x0($s7)
    ctx->pc = 0x4d0c90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4d0c94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d0c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d0c98: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d0c98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d0c9c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x4d0c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x4d0ca0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4d0ca0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4d0ca4: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x4d0ca4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x4d0ca8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4d0ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d0cac: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d0cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d0cb0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4d0cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d0cb4: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4d0cb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4d0cb8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d0cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d0cbc: 0x24420ffc  addiu       $v0, $v0, 0xFFC
    ctx->pc = 0x4d0cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4092));
    // 0x4d0cc0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d0cc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d0cc4: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x4d0cc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x7F0FFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0FFCu, _value); } while (0);
    // 0x4d0cc8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d0cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d0ccc: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x4d0cccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x4d0cd0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d0cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d0cd4: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4d0cd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4d0cd8: 0xaee80000  sw          $t0, 0x0($s7)
    ctx->pc = 0x4d0cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 8));
    // 0x4d0cdc: 0x86c20026  lh          $v0, 0x26($s6)
    ctx->pc = 0x4d0cdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 38)));
    // 0x4d0ce0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d0ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d0ce4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d0ce4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4d0ce8: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4d0ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4d0cec: 0x86c20028  lh          $v0, 0x28($s6)
    ctx->pc = 0x4d0cecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x4d0cf0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d0cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d0cf4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d0cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d0cf8: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4d0cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4d0cfc: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4D0CFCu;
    SET_GPR_U32(ctx, 31, 0x4D0D04u);
    ctx->pc = 0x4D0D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0CFCu;
    // 0x4d0d00: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4D0CFCu, 0x4D0D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0D04u;
label_4d0d04:
    // 0x4d0d04: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x4d0d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4d0d08: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x4d0d08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4d0d0c: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x4d0d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4d0d10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4d0d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d0d14: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x4d0d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4d0d18: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d0d1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d0d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d0d20: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4d0d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4d0d24: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d0d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d0d28: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4d0d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4d0d2c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d0d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d0d30: 0x24630ffc  addiu       $v1, $v1, 0xFFC
    ctx->pc = 0x4d0d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4092));
    // 0x4d0d34: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d0d34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0FFCu));
    // 0x4d0d38: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d0d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d0d3c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d0d40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d0d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d0d44: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4d0d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4d0d48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d0d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d0d4c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d0d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4d0d50: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x4d0d50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4d0d54: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4d0d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d0d58: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d0d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d0d5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d0d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d0d60: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4d0d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4d0d64: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d0d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d0d68: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4d0d68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4d0d6c: 0xae160140  sw          $s6, 0x140($s0)
    ctx->pc = 0x4d0d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 22));
    // 0x4d0d70: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4d0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d0d74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d0d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d0d78: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4d0d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4d0d7c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d0d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4d0d80: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4d0d80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d0d84: 0xa60301b8  sh          $v1, 0x1B8($s0)
    ctx->pc = 0x4d0d84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 440), (uint16_t)GPR_U32(ctx, 3));
label_4d0d88:
    // 0x4d0d88: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4d0d88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d0d8c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d0d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4d0d90: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d0d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d0d94: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x4d0d94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x4d0d98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4d0d9c: 0x94a41004  lhu         $a0, 0x1004($a1)
    ctx->pc = 0x4d0d9cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7F1004u));
    // 0x4d0da0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4d0da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4d0da4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d0da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d0da8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d0da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d0dac: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d0dacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4d0db0: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4d0db0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d0db4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4d0db4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4d0db8: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x4D0DB8u;
    {
        const bool branch_taken_0x4d0db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0DB8u;
        // 0x4d0dbc: 0x26940006  addiu       $s4, $s4, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0db8) {
            ctx->pc = 0x4D0C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d0c38;
        }
    }
    ctx->pc = 0x4D0DC0u;
    // 0x4d0dc0: 0x26c301bc  addiu       $v1, $s6, 0x1BC
    ctx->pc = 0x4d0dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 444));
    // 0x4d0dc4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4d0dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0dc8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d0dc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d0dcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d0dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d0dd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d0dd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d0dd4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d0dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d0dd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d0dd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d0ddc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d0ddcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d0de0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d0de0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d0de4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d0de4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d0de8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d0de8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d0dec: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d0decu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d0df0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4d0df0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d0df4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4d0df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d0df8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d0df8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d0dfc: 0x813438e  j           func_4D0E38
    ctx->pc = 0x4D0DFCu;
    ctx->pc = 0x4D0E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0DFCu;
    // 0x4d0e00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D0E38u;
    goto label_4d0e38;
    ctx->pc = 0x4D0E04u;
    // 0x4d0e04: 0x0  nop
    ctx->pc = 0x4d0e04u;
    // NOP
label_4d0e08:
    // 0x4d0e08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d0e08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d0e0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d0e0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d0e10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d0e10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d0e14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d0e14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d0e18: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d0e18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d0e1c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d0e1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d0e20: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d0e20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d0e24: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d0e24u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d0e28: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4d0e28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d0e2c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4d0e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d0e30: 0x3e00008  jr          $ra
    ctx->pc = 0x4D0E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D0E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0E30u;
        // 0x4d0e34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D0E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D0E38u;
label_4d0e38:
    // 0x4d0e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d0e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d0e3c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4d0e3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0e40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d0e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d0e44: 0x244601bc  addiu       $a2, $v0, 0x1BC
    ctx->pc = 0x4d0e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
    // 0x4d0e48: 0x2442015e  addiu       $v0, $v0, 0x15E
    ctx->pc = 0x4d0e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 350));
    // 0x4d0e4c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4d0e4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d0e50: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4d0e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4d0e54: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4d0e54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4d0e58: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D0E58u;
    {
        const bool branch_taken_0x4d0e58 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4D0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0E58u;
        // 0x4d0e5c: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0e58) {
            ctx->pc = 0x4D0E70u;
            goto label_4d0e70;
        }
    }
    ctx->pc = 0x4D0E60u;
    // 0x4d0e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d0e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d0e64: 0x8134482  j           func_4D1208
    ctx->pc = 0x4D0E64u;
    ctx->pc = 0x4D0E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0E64u;
    // 0x4d0e68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D1208u;
    goto label_4d1208;
    ctx->pc = 0x4D0E6Cu;
    // 0x4d0e6c: 0x0  nop
    ctx->pc = 0x4d0e6cu;
    // NOP
label_4d0e70:
    // 0x4d0e70: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d0e70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d0e74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d0e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d0e78: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d0e7c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4d0e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d0e80: 0x8134482  j           func_4D1208
    ctx->pc = 0x4D0E80u;
    ctx->pc = 0x4D0E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0E80u;
    // 0x4d0e84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D1208u;
    goto label_4d1208;
    ctx->pc = 0x4D0E88u;
label_4d0e88:
    // 0x4d0e88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d0e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d0e8c: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4d0e8cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4d0e90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d0e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d0e94: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4d0e94u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4d0e98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d0e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d0e9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d0e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0ea0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d0ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d0ea4: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4d0ea4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4d0ea8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4d0ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4d0eac: 0x254a0ff8  addiu       $t2, $t2, 0xFF8
    ctx->pc = 0x4d0eacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4088));
    // 0x4d0eb0: 0x256b0ffc  addiu       $t3, $t3, 0xFFC
    ctx->pc = 0x4d0eb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4092));
    // 0x4d0eb4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4d0eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4d0eb8: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x4d0eb8u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F0FF8u));
    // 0x4d0ebc: 0x24058000  addiu       $a1, $zero, -0x8000
    ctx->pc = 0x4d0ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x4d0ec0: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4d0ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0FFCu));
    // 0x4d0ec4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x4d0ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x4d0ec8: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4d0ec8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4d0ecc: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4d0eccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4d0ed0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d0ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d0ed4: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4d0ed4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4d0ed8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4d0ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4d0edc: 0x26500ff0  addiu       $s0, $s2, 0xFF0
    ctx->pc = 0x4d0edcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4080));
    // 0x4d0ee0: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x4d0ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x4d0ee4: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x4d0ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0ee8: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4d0ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4d0eec: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4d0eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0ef0: 0x24e70fec  addiu       $a3, $a3, 0xFEC
    ctx->pc = 0x4d0ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4076));
    // 0x4d0ef4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4d0ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0ef8: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4D0EF8u;
    SET_GPR_U32(ctx, 31, 0x4D0F00u);
    ctx->pc = 0x4D0EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0EF8u;
    // 0x4d0efc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4D0EF8u, 0x4D0F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0F00u;
label_4d0f00:
    // 0x4d0f00: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D0F00u;
    {
        const bool branch_taken_0x4d0f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d0f00) {
            ctx->pc = 0x4D0F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D0F00u;
            // 0x4d0f04: 0x86240164  lh          $a0, 0x164($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 356)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D0F28u;
            goto label_4d0f28;
        }
    }
    ctx->pc = 0x4D0F08u;
    // 0x4d0f08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d0f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0f0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d0f0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d0f10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d0f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d0f14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d0f14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d0f18: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4d0f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d0f1c: 0x8134482  j           func_4D1208
    ctx->pc = 0x4D0F1Cu;
    ctx->pc = 0x4D0F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0F1Cu;
    // 0x4d0f20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D1208u;
    goto label_4d1208;
    ctx->pc = 0x4D0F24u;
    // 0x4d0f24: 0x0  nop
    ctx->pc = 0x4d0f24u;
    // NOP
label_4d0f28:
    // 0x4d0f28: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4d0f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4d0f2c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4d0f2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d0f30: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4d0f30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4d0f34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4d0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d0f38: 0x24e60ff4  addiu       $a2, $a3, 0xFF4
    ctx->pc = 0x4d0f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4084));
    // 0x4d0f3c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4d0f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4d0f40: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x4d0f40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x4d0f44: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4d0f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4d0f48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d0f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d0f4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d0f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d0f50: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d0f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4d0f54: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4d0f54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d0f58: 0x2c626000  sltiu       $v0, $v1, 0x6000
    ctx->pc = 0x4d0f58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)24576) ? 1 : 0);
    // 0x4d0f5c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4D0F5Cu;
    {
        const bool branch_taken_0x4d0f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0F5Cu;
        // 0x4d0f60: 0x26440ff0  addiu       $a0, $s2, 0xFF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0f5c) {
            ctx->pc = 0x4D0F88u;
            goto label_4d0f88;
        }
    }
    ctx->pc = 0x4D0F64u;
    // 0x4d0f64: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d0f64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d0f68: 0x2c630500  sltiu       $v1, $v1, 0x500
    ctx->pc = 0x4d0f68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1280) ? 1 : 0);
    // 0x4d0f6c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4d0f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4d0f70: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D0F70u;
    {
        const bool branch_taken_0x4d0f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0F70u;
        // 0x4d0f74: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0f70) {
            ctx->pc = 0x4D0F88u;
            goto label_4d0f88;
        }
    }
    ctx->pc = 0x4D0F78u;
    // 0x4d0f78: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d0f78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d0f7c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4d0f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4d0f80: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4d0f80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4d0f84: 0x26440ff0  addiu       $a0, $s2, 0xFF0
    ctx->pc = 0x4d0f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4080));
label_4d0f88:
    // 0x4d0f88: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4d0f88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4d0f8c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4d0f8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d0f90: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4d0f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d0f94: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4d0f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4d0f98: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d0f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4d0f9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d0f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d0fa0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d0fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d0fa4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4d0fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4d0fa8: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x4d0fa8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d0fac: 0x2c826000  sltiu       $v0, $a0, 0x6000
    ctx->pc = 0x4d0facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24576) ? 1 : 0);
    // 0x4d0fb0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4D0FB0u;
    {
        const bool branch_taken_0x4d0fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0FB0u;
        // 0x4d0fb4: 0x94e20ff4  lhu         $v0, 0xFF4($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0fb0) {
            ctx->pc = 0x4D100Cu;
            goto label_4d100c;
        }
    }
    ctx->pc = 0x4D0FB8u;
    // 0x4d0fb8: 0x24e50ff4  addiu       $a1, $a3, 0xFF4
    ctx->pc = 0x4d0fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4084));
    // 0x4d0fbc: 0x2c820500  sltiu       $v0, $a0, 0x500
    ctx->pc = 0x4d0fbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1280) ? 1 : 0);
    // 0x4d0fc0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4d0fc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d0fc4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4d0fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d0fc8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4d0fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x4d0fcc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4d0fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4d0fd0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d0fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4d0fd4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4d0fd4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4d0fd8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4d0fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4d0fdc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4d0fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4d0fe0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D0FE0u;
    {
        const bool branch_taken_0x4d0fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0FE0u;
        // 0x4d0fe4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0fe0) {
            ctx->pc = 0x4D1008u;
            goto label_4d1008;
        }
    }
    ctx->pc = 0x4D0FE8u;
    // 0x4d0fe8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d0fe8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d0fec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d0fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d0ff0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4d0ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4d0ff4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d0ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d0ff8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d0ff8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d0ffc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d0ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4d1000: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d1000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d1004: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d1004u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d1008:
    // 0x4d1008: 0x94e20ff4  lhu         $v0, 0xFF4($a3)
    ctx->pc = 0x4d1008u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4084)));
label_4d100c:
    // 0x4d100c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4d100cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d1010: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D1010u;
    {
        const bool branch_taken_0x4d1010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1010u;
        // 0x4d1014: 0xa6220162  sh          $v0, 0x162($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 354), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1010) {
            ctx->pc = 0x4D1028u;
            goto label_4d1028;
        }
    }
    ctx->pc = 0x4D1018u;
    // 0x4d1018: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4d1018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4d101c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d101cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d1020: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d1020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d1024: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d1024u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d1028:
    // 0x4d1028: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d1028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d102c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d102cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d1030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d1030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d1034: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d1034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d1038: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4d1038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d103c: 0x8134482  j           func_4D1208
    ctx->pc = 0x4D103Cu;
    ctx->pc = 0x4D1040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D103Cu;
    // 0x4d1040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D1208u;
    goto label_4d1208;
    ctx->pc = 0x4D1044u;
    // 0x4d1044: 0x0  nop
    ctx->pc = 0x4d1044u;
    // NOP
label_4d1048:
    // 0x4d1048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d1048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d104c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d104cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d1050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d1050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d1054: 0x24480fec  addiu       $t0, $v0, 0xFEC
    ctx->pc = 0x4d1054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4076));
    // 0x4d1058: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4d1058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d105c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4d105cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4d1060: 0x84c50162  lh          $a1, 0x162($a2)
    ctx->pc = 0x4d1060u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 354)));
    // 0x4d1064: 0x24c70160  addiu       $a3, $a2, 0x160
    ctx->pc = 0x4d1064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 352));
    // 0x4d1068: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4d1068u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0FECu));
    // 0x4d106c: 0x24c901bc  addiu       $t1, $a2, 0x1BC
    ctx->pc = 0x4d106cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 444));
    // 0x4d1070: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4d1070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4d1074: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d1074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d1078: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4d1078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4d107c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4d107cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4d1080: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4d1080u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d1084: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4d1084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4d1088: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D1088u;
    {
        const bool branch_taken_0x4d1088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1088u;
        // 0x4d108c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1088) {
            ctx->pc = 0x4D10A0u;
            goto label_4d10a0;
        }
    }
    ctx->pc = 0x4D1090u;
    // 0x4d1090: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4d1090u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d1094: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4d1094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4d1098: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4d1098u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d109c: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4d109cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4d10a0:
    // 0x4d10a0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x4d10a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x4d10a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D10A4u;
    {
        const bool branch_taken_0x4d10a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D10A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D10A4u;
        // 0x4d10a8: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d10a4) {
            ctx->pc = 0x4D10B8u;
            goto label_4d10b8;
        }
    }
    ctx->pc = 0x4D10ACu;
    // 0x4d10ac: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d10acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d10b0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x4d10b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x4d10b4: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4d10b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d10b8:
    // 0x4d10b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d10b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d10bc: 0xa4c3015e  sh          $v1, 0x15E($a2)
    ctx->pc = 0x4d10bcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 350), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d10c0: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4d10c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d10c4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d10c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d10c8: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4d10c8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d10cc: 0x8134482  j           func_4D1208
    ctx->pc = 0x4D10CCu;
    ctx->pc = 0x4D10D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D10CCu;
    // 0x4d10d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D1208u;
    goto label_4d1208;
    ctx->pc = 0x4D10D4u;
    // 0x4d10d4: 0x0  nop
    ctx->pc = 0x4d10d4u;
    // NOP
label_4d10d8:
    // 0x4d10d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d10d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d10dc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d10dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d10e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d10e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d10e4: 0x24480fec  addiu       $t0, $v0, 0xFEC
    ctx->pc = 0x4d10e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4076));
    // 0x4d10e8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4d10e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d10ec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4d10ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4d10f0: 0x84c50162  lh          $a1, 0x162($a2)
    ctx->pc = 0x4d10f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 354)));
    // 0x4d10f4: 0x24c70160  addiu       $a3, $a2, 0x160
    ctx->pc = 0x4d10f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 352));
    // 0x4d10f8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4d10f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0FECu));
    // 0x4d10fc: 0x24c901bc  addiu       $t1, $a2, 0x1BC
    ctx->pc = 0x4d10fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 444));
    // 0x4d1100: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4d1100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4d1104: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d1104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d1108: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4d1108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4d110c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4d110cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4d1110: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4d1110u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d1114: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4d1114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4d1118: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D1118u;
    {
        const bool branch_taken_0x4d1118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1118u;
        // 0x4d111c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1118) {
            ctx->pc = 0x4D1130u;
            goto label_4d1130;
        }
    }
    ctx->pc = 0x4D1120u;
    // 0x4d1120: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4d1120u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d1124: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4d1124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4d1128: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4d1128u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d112c: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4d112cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4d1130:
    // 0x4d1130: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x4d1130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x4d1134: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D1134u;
    {
        const bool branch_taken_0x4d1134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1134u;
        // 0x4d1138: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1134) {
            ctx->pc = 0x4D1148u;
            goto label_4d1148;
        }
    }
    ctx->pc = 0x4D113Cu;
    // 0x4d113c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d113cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d1140: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x4d1140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x4d1144: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4d1144u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d1148:
    // 0x4d1148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d1148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d114c: 0xa4c3015e  sh          $v1, 0x15E($a2)
    ctx->pc = 0x4d114cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 350), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d1150: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4d1150u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4d1154: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d1154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d1158: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4d1158u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d115c: 0x8134482  j           func_4D1208
    ctx->pc = 0x4D115Cu;
    ctx->pc = 0x4D1160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D115Cu;
    // 0x4d1160: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D1208u;
    goto label_4d1208;
    ctx->pc = 0x4D1164u;
    // 0x4d1164: 0x0  nop
    ctx->pc = 0x4d1164u;
    // NOP
label_4d1168:
    // 0x4d1168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d1168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d116c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4d116cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d1170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d1174: 0x24650160  addiu       $a1, $v1, 0x160
    ctx->pc = 0x4d1174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
    // 0x4d1178: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x4d1178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x4d117c: 0x246601bc  addiu       $a2, $v1, 0x1BC
    ctx->pc = 0x4d117cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 444));
    // 0x4d1180: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d1180u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d1184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d1184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d1188: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x4d1188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x4d118c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4d118cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d1190: 0xa467015e  sh          $a3, 0x15E($v1)
    ctx->pc = 0x4d1190u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 350), (uint16_t)GPR_U32(ctx, 7));
    // 0x4d1194: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d1194u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d1198: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d1198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d119c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4d119cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d11a0: 0x8134482  j           func_4D1208
    ctx->pc = 0x4D11A0u;
    ctx->pc = 0x4D11A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D11A0u;
    // 0x4d11a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D1208u;
    goto label_4d1208;
    ctx->pc = 0x4D11A8u;
label_4d11a8:
    // 0x4d11a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d11a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d11ac: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4d11acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d11b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d11b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d11b4: 0x24650160  addiu       $a1, $v1, 0x160
    ctx->pc = 0x4d11b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
    // 0x4d11b8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4d11b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d11bc: 0x246601bc  addiu       $a2, $v1, 0x1BC
    ctx->pc = 0x4d11bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 444));
    // 0x4d11c0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d11c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d11c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d11c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d11c8: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x4d11c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x4d11cc: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4d11ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d11d0: 0xa467015e  sh          $a3, 0x15E($v1)
    ctx->pc = 0x4d11d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 350), (uint16_t)GPR_U32(ctx, 7));
    // 0x4d11d4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4d11d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d11d8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d11d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d11dc: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4d11dcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d11e0: 0x8134482  j           func_4D1208
    ctx->pc = 0x4D11E0u;
    ctx->pc = 0x4D11E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D11E0u;
    // 0x4d11e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D1208u;
    goto label_4d1208;
    ctx->pc = 0x4D11E8u;
label_4d11e8:
    // 0x4d11e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d11e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d11ec: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4d11ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4d11f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d11f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d11f4: 0xa48201bc  sh          $v0, 0x1BC($a0)
    ctx->pc = 0x4d11f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 444), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d11f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d11f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d11fc: 0x8134482  j           func_4D1208
    ctx->pc = 0x4D11FCu;
    ctx->pc = 0x4D1200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D11FCu;
    // 0x4d1200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D1208u;
    goto label_4d1208;
    ctx->pc = 0x4D1204u;
    // 0x4d1204: 0x0  nop
    ctx->pc = 0x4d1204u;
    // NOP
label_4d1208:
    // 0x4d1208: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4d1208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4d120c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d120cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d1210: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d1210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d1214: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d1214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d1218: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d1218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d121c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d121cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d1220: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d1220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4d1224: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4d1224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4d1228: 0xc12564a  jal         func_495928
    ctx->pc = 0x4D1228u;
    SET_GPR_U32(ctx, 31, 0x4D1230u);
    ctx->pc = 0x4D122Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D1228u;
    // 0x4d122c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4D1228u, 0x4D1230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D1230u;
label_4d1230:
    // 0x4d1230: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x4D1230u;
    {
        const bool branch_taken_0x4d1230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1230u;
        // 0x4d1234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1230) {
            ctx->pc = 0x4D1498u;
            goto label_4d1498;
        }
    }
    ctx->pc = 0x4D1238u;
    // 0x4d1238: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4D1238u;
    SET_GPR_U32(ctx, 31, 0x4D1240u);
    ctx->pc = 0x4D123Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D1238u;
    // 0x4d123c: 0x3c15007f  lui         $s5, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4D1238u, 0x4D1240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D1240u;
label_4d1240:
    // 0x4d1240: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4D1240u;
    SET_GPR_U32(ctx, 31, 0x4D1248u);
    ctx->pc = 0x4D1244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D1240u;
    // 0x4d1244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4D1240u, 0x4D1248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D1248u;
label_4d1248:
    // 0x4d1248: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4d1248u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4d124c: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4d124cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4d1250: 0x25290ff8  addiu       $t1, $t1, 0xFF8
    ctx->pc = 0x4d1250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4088));
    // 0x4d1254: 0x254a0ffc  addiu       $t2, $t2, 0xFFC
    ctx->pc = 0x4d1254u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4092));
    // 0x4d1258: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x4d1258u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0FF8u));
    // 0x4d125c: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x4d125cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0FFCu));
    // 0x4d1260: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4d1260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4d1264: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4d1264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4d1268: 0x3442049e  ori         $v0, $v0, 0x49E
    ctx->pc = 0x4d1268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1182);
    // 0x4d126c: 0x3463049f  ori         $v1, $v1, 0x49F
    ctx->pc = 0x4d126cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1183);
    // 0x4d1270: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d1270u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d1274: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4d1274u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4d1278: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4d1278u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4d127c: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4d127cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4d1280: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x4d1280u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x4d1284: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x4d1284u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x4d1288: 0x26b00fec  addiu       $s0, $s5, 0xFEC
    ctx->pc = 0x4d1288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4076));
    // 0x4d128c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d128cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1290: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4d1290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1294: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x4d1294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1298: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4D1298u;
    SET_GPR_U32(ctx, 31, 0x4D12A0u);
    ctx->pc = 0x4D129Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D1298u;
    // 0x4d129c: 0x26340160  addiu       $s4, $s1, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4D1298u, 0x4D12A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D12A0u;
label_4d12a0:
    // 0x4d12a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d12a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d12a4: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4d12a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d12a8: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4d12a8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4d12ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d12acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d12b0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4d12b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4d12b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d12b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d12b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d12b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d12bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d12bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d12c0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d12c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d12c4: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x4d12c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x4d12c8: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4d12c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4d12cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d12ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d12d0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d12d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d12d4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d12d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d12d8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4D12D8u;
    {
        const bool branch_taken_0x4d12d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D12DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D12D8u;
        // 0x4d12dc: 0x96040000  lhu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d12d8) {
            ctx->pc = 0x4D1308u;
            goto label_4d1308;
        }
    }
    ctx->pc = 0x4D12E0u;
    // 0x4d12e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d12e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d12e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d12e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d12e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d12e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d12ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d12ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d12f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d12f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d12f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d12f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d12f8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d12f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d12fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d12fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d1300: 0x8134530  j           func_4D14C0
    ctx->pc = 0x4D1300u;
    ctx->pc = 0x4D1304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D1300u;
    // 0x4d1304: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D14C0u;
    goto label_4d14c0;
    ctx->pc = 0x4D1308u;
label_4d1308:
    // 0x4d1308: 0x30820100  andi        $v0, $a0, 0x100
    ctx->pc = 0x4d1308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x4d130c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d130cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d1310: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d1310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d1314: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d1314u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d1318: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4d1318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4d131c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d131cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d1320: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d1320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d1324: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d1324u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d1328: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4D1328u;
    {
        const bool branch_taken_0x4d1328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1328u;
        // 0x4d132c: 0x26320162  addiu       $s2, $s1, 0x162 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 354));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1328) {
            ctx->pc = 0x4D13A4u;
            goto label_4d13a4;
        }
    }
    ctx->pc = 0x4D1330u;
    // 0x4d1330: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x4d1330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d1334: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4d1334u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d1338: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4d1338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4d133c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d133cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d1340: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d1340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4d1344: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4d1344u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d1348: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4d1348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4d134c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D134Cu;
    {
        const bool branch_taken_0x4d134c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D134Cu;
        // 0x4d1350: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d134c) {
            ctx->pc = 0x4D1368u;
            goto label_4d1368;
        }
    }
    ctx->pc = 0x4D1354u;
    // 0x4d1354: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d1354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d1358: 0x24427420  addiu       $v0, $v0, 0x7420
    ctx->pc = 0x4d1358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29728));
    // 0x4d135c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d135cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1360: 0xc134696  jal         func_4D1A58
    ctx->pc = 0x4D1360u;
    SET_GPR_U32(ctx, 31, 0x4D1368u);
    ctx->pc = 0x4D1364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D1360u;
    // 0x4d1364: 0xac621008  sw          $v0, 0x1008($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D1A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D1A58u, 0x4D1360u, 0x4D1368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D1368u;
label_4d1368:
    // 0x4d1368: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4d1368u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d136c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d136cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d1370: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4d1370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4d1374: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d1374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d1378: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d1378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d137c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d137cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d1380: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d1380u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d1384: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4d1384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4d1388: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D1388u;
    {
        const bool branch_taken_0x4d1388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1388u;
        // 0x4d138c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1388) {
            ctx->pc = 0x4D13A4u;
            goto label_4d13a4;
        }
    }
    ctx->pc = 0x4D1390u;
    // 0x4d1390: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d1390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d1394: 0x24427430  addiu       $v0, $v0, 0x7430
    ctx->pc = 0x4d1394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29744));
    // 0x4d1398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d1398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d139c: 0xc134696  jal         func_4D1A58
    ctx->pc = 0x4D139Cu;
    SET_GPR_U32(ctx, 31, 0x4D13A4u);
    ctx->pc = 0x4D13A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D139Cu;
    // 0x4d13a0: 0xac621008  sw          $v0, 0x1008($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D1A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D1A58u, 0x4D139Cu, 0x4D13A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D13A4u;
label_4d13a4:
    // 0x4d13a4: 0x26b00fec  addiu       $s0, $s5, 0xFEC
    ctx->pc = 0x4d13a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4076));
    // 0x4d13a8: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4d13a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d13ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d13acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d13b0: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4d13b0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4d13b4: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4d13b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4d13b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d13b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d13bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d13bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d13c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d13c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d13c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d13c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d13c8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d13c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d13cc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x4d13ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x4d13d0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d13d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d13d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d13d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d13d8: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4d13d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4d13dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d13dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d13e0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d13e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d13e4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4d13e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d13e8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4D13E8u;
    {
        const bool branch_taken_0x4d13e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D13ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D13E8u;
        // 0x4d13ec: 0x26320162  addiu       $s2, $s1, 0x162 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 354));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d13e8) {
            ctx->pc = 0x4D1464u;
            goto label_4d1464;
        }
    }
    ctx->pc = 0x4D13F0u;
    // 0x4d13f0: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x4d13f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d13f4: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4d13f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d13f8: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4d13f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4d13fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d13fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d1400: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d1400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4d1404: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4d1404u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d1408: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4d1408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4d140c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D140Cu;
    {
        const bool branch_taken_0x4d140c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D140Cu;
        // 0x4d1410: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d140c) {
            ctx->pc = 0x4D1428u;
            goto label_4d1428;
        }
    }
    ctx->pc = 0x4D1414u;
    // 0x4d1414: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d1414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d1418: 0x24427440  addiu       $v0, $v0, 0x7440
    ctx->pc = 0x4d1418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29760));
    // 0x4d141c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d141cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1420: 0xc134696  jal         func_4D1A58
    ctx->pc = 0x4D1420u;
    SET_GPR_U32(ctx, 31, 0x4D1428u);
    ctx->pc = 0x4D1424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D1420u;
    // 0x4d1424: 0xac621008  sw          $v0, 0x1008($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D1A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D1A58u, 0x4D1420u, 0x4D1428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D1428u;
label_4d1428:
    // 0x4d1428: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4d1428u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d142c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d142cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d1430: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4d1430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4d1434: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d1434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d1438: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d1438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d143c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d143cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d1440: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d1440u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d1444: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4d1444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4d1448: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D1448u;
    {
        const bool branch_taken_0x4d1448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1448u;
        // 0x4d144c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1448) {
            ctx->pc = 0x4D1464u;
            goto label_4d1464;
        }
    }
    ctx->pc = 0x4D1450u;
    // 0x4d1450: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d1450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4d1454: 0x24427450  addiu       $v0, $v0, 0x7450
    ctx->pc = 0x4d1454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29776));
    // 0x4d1458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d1458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d145c: 0xc134696  jal         func_4D1A58
    ctx->pc = 0x4D145Cu;
    SET_GPR_U32(ctx, 31, 0x4D1464u);
    ctx->pc = 0x4D1460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D145Cu;
    // 0x4d1460: 0xac621008  sw          $v0, 0x1008($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D1A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D1A58u, 0x4D145Cu, 0x4D1464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D1464u;
label_4d1464:
    // 0x4d1464: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4d1464u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d1468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d1468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d146c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d146cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d1470: 0x3042fcff  andi        $v0, $v0, 0xFCFF
    ctx->pc = 0x4d1470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64767);
    // 0x4d1474: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d1474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d1478: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x4d1478u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d147c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d147cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d1480: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d1480u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d1484: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d1484u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d1488: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d1488u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d148c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d148cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d1490: 0x8134530  j           func_4D14C0
    ctx->pc = 0x4D1490u;
    ctx->pc = 0x4D1494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D1490u;
    // 0x4d1494: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D14C0u;
    goto label_4d14c0;
    ctx->pc = 0x4D1498u;
label_4d1498:
    // 0x4d1498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d1498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d149c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d149cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d14a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d14a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d14a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d14a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d14a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d14a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d14ac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d14acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d14b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d14b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d14b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4D14B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D14B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D14B4u;
        // 0x4d14b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D14B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D14BCu;
    // 0x4d14bc: 0x0  nop
    ctx->pc = 0x4d14bcu;
    // NOP
label_4d14c0:
    // 0x4d14c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d14c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d14c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d14c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d14c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4d14c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4d14cc: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4D14CCu;
    SET_GPR_U32(ctx, 31, 0x4D14D4u);
    ctx->pc = 0x4D14D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D14CCu;
    // 0x4d14d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4D14CCu, 0x4D14D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D14D4u;
label_4d14d4:
    // 0x4d14d4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D14D4u;
    {
        const bool branch_taken_0x4d14d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d14d4) {
            ctx->pc = 0x4D14D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D14D4u;
            // 0x4d14d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D14F4u;
            goto label_4d14f4;
        }
    }
    ctx->pc = 0x4D14DCu;
    // 0x4d14dc: 0x86020148  lh          $v0, 0x148($s0)
    ctx->pc = 0x4d14dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x4d14e0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D14E0u;
    {
        const bool branch_taken_0x4d14e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d14e0) {
            ctx->pc = 0x4D14E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D14E0u;
            // 0x4d14e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D14F4u;
            goto label_4d14f4;
        }
    }
    ctx->pc = 0x4D14E8u;
    // 0x4d14e8: 0xc134540  jal         func_4D1500
    ctx->pc = 0x4D14E8u;
    SET_GPR_U32(ctx, 31, 0x4D14F0u);
    ctx->pc = 0x4D14ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D14E8u;
    // 0x4d14ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D1500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D1500u, 0x4D14E8u, 0x4D14F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D14F0u;
label_4d14f0:
    // 0x4d14f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d14f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d14f4:
    // 0x4d14f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d14f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d14f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4D14F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D14FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D14F8u;
        // 0x4d14fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D14F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D1500u;
}
