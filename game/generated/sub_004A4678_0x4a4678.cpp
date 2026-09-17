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

// Function: sub_004A4678
// Address: 0x4a4678 - 0x4a48c0
void sub_004A4678_0x4a4678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4678_0x4a4678");
#endif

    switch (ctx->pc) {
        case 0x4a46c8u: goto label_4a46c8;
        case 0x4a47c0u: goto label_4a47c0;
        case 0x4a484cu: goto label_4a484c;
        default: break;
    }

    ctx->pc = 0x4a4678u;

    // 0x4a4678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a4678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a467c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4a467cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4a4680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a4680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a4684: 0x24840c08  addiu       $a0, $a0, 0xC08
    ctx->pc = 0x4a4684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3080));
    // 0x4a4688: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4a4688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4a468c: 0x84a2d642  lh          $v0, -0x29BE($a1)
    ctx->pc = 0x4a468cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D642u));
    // 0x4a4690: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a4690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a4694: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a4694u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0C08u));
    // 0x4a4698: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4a4698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4a469c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a469cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a46a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a46a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a46a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a46a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a46a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a46a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a46ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a46acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a46b0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4a46b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a46b4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4a46b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4a46b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a46b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a46bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a46bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a46c0: 0x8128e64  j           func_4A3990
    ctx->pc = 0x4A46C0u;
    ctx->pc = 0x4A46C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A46C0u;
    // 0x4a46c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3990u, 0x4A46C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4A46C8u;
label_4a46c8:
    // 0x4a46c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a46c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4a46cc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4a46ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4a46d0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a46d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a46d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a46d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a46d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a46d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a46dc: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4a46dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4a46e0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4a46e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4a46e4: 0x24c3d680  addiu       $v1, $a2, -0x2980
    ctx->pc = 0x4a46e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x4a46e8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4a46e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4a46ec: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4a46ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a46f0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4a46f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4a46f4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4a46f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a46f8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4a46f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4a46fc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x4a46fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4700: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4a4700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4a4704: 0x24880010  addiu       $t0, $a0, 0x10
    ctx->pc = 0x4a4704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4a4708: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a4708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a470c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4a470cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4a4710: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4a4710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4a4714: 0x9485000c  lhu         $a1, 0xC($a0)
    ctx->pc = 0x4a4714u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4a4718: 0x8482000e  lh          $v0, 0xE($a0)
    ctx->pc = 0x4a4718u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x4a471c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4a471cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4a4720: 0x8c660064  lw          $a2, 0x64($v1)
    ctx->pc = 0x4a4720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x4a4724: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4a4724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4a4728: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a4728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a472c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4a472cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4a4730: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x4a4730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x4a4734: 0xa71024  and         $v0, $a1, $a3
    ctx->pc = 0x4a4734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4a4738: 0xa74825  or          $t1, $a1, $a3
    ctx->pc = 0x4a4738u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x4a473c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4a473cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4a4740: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4a4740u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a4744: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a4744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4748: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a4748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a474c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a474cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4a4750: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x4a4750u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4a4754: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4a4754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a4758: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a4758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a475c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4a475cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4a4760: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a4760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a4764: 0x39403  sra         $s2, $v1, 16
    ctx->pc = 0x4a4764u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a4768: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a4768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4a476c: 0x122cc0  sll         $a1, $s2, 19
    ctx->pc = 0x4a476cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 19));
    // 0x4a4770: 0xa4520000  sh          $s2, 0x0($v0)
    ctx->pc = 0x4a4770u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x4a4774: 0x5f403  sra         $fp, $a1, 16
    ctx->pc = 0x4a4774u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4a4778: 0x94830014  lhu         $v1, 0x14($a0)
    ctx->pc = 0x4a4778u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4a477c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x4a477cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4a4780: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a4780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a4784: 0x85100000  lh          $s0, 0x0($t0)
    ctx->pc = 0x4a4784u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a4788: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a4788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a478c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a478cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4790: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4a4790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4a4794: 0x1232824  and         $a1, $t1, $v1
    ctx->pc = 0x4a4794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4a4798: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a4798u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a479c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a479cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a47a0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4a47a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4a47a4: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x4a47a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x4a47a8: 0x101cc0  sll         $v1, $s0, 19
    ctx->pc = 0x4a47a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 19));
    // 0x4a47ac: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4a47acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4a47b0: 0xa2a024  and         $s4, $a1, $v0
    ctx->pc = 0x4a47b0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4a47b4: 0x6400031  bltz        $s2, . + 4 + (0x31 << 2)
    ctx->pc = 0x4A47B4u;
    {
        const bool branch_taken_0x4a47b4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x4A47B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A47B4u;
        // 0x4a47b8: 0x38403  sra         $s0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a47b4) {
            ctx->pc = 0x4A487Cu;
            goto label_4a487c;
        }
    }
    ctx->pc = 0x4A47BCu;
    // 0x4a47bc: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4a47bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_4a47c0:
    // 0x4a47c0: 0x101843  sra         $v1, $s0, 1
    ctx->pc = 0x4a47c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 1));
    // 0x4a47c4: 0x161043  sra         $v0, $s6, 1
    ctx->pc = 0x4a47c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 22), 1));
    // 0x4a47c8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4a47c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4a47cc: 0x3628ffff  ori         $t0, $s1, 0xFFFF
    ctx->pc = 0x4a47ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4a47d0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x4a47d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x4a47d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a47d8: 0x84640002  lh          $a0, 0x2($v1)
    ctx->pc = 0x4a47d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x4a47dc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4a47dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x4a47e0: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x4a47e0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a47e4: 0x36a9ffff  ori         $t1, $s5, 0xFFFF
    ctx->pc = 0x4a47e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x4a47e8: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x4a47e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x4a47ec: 0x94650004  lhu         $a1, 0x4($v1)
    ctx->pc = 0x4a47ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4a47f0: 0x1048824  and         $s1, $t0, $a0
    ctx->pc = 0x4a47f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4a47f4: 0x36e4ffff  ori         $a0, $s7, 0xFFFF
    ctx->pc = 0x4a47f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x4a47f8: 0x111400  sll         $v0, $s1, 16
    ctx->pc = 0x4a47f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x4a47fc: 0x84670006  lh          $a3, 0x6($v1)
    ctx->pc = 0x4a47fcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x4a4800: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x4a4800u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x4a4804: 0x3623ffff  ori         $v1, $s1, 0xFFFF
    ctx->pc = 0x4a4804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4a4808: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4a4808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4a480c: 0xd33025  or          $a2, $a2, $s3
    ctx->pc = 0x4a480cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 19));
    // 0x4a4810: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x4a4810u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a4814: 0xf33825  or          $a3, $a3, $s3
    ctx->pc = 0x4a4814u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x4a4818: 0x2252825  or          $a1, $s1, $a1
    ctx->pc = 0x4a4818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    // 0x4a481c: 0x3622ffff  ori         $v0, $s1, 0xFFFF
    ctx->pc = 0x4a481cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4a4820: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4a4820u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4a4824: 0x126a824  and         $s5, $t1, $a2
    ctx->pc = 0x4a4824u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
    // 0x4a4828: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4a4828u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4a482c: 0x87b824  and         $s7, $a0, $a3
    ctx->pc = 0x4a482cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4a4830: 0xb32825  or          $a1, $a1, $s3
    ctx->pc = 0x4a4830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 19));
    // 0x4a4834: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x4a4834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4838: 0x458824  and         $s1, $v0, $a1
    ctx->pc = 0x4a4838u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4a483c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4a483cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4840: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a4840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4844: 0xc122288  jal         func_488A20
    ctx->pc = 0x4A4844u;
    SET_GPR_U32(ctx, 31, 0x4A484Cu);
    ctx->pc = 0x4A4848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4844u;
    // 0x4a4848: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488A20u, 0x4A4844u, 0x4A484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A484Cu;
label_4a484c:
    // 0x4a484c: 0x26c40008  addiu       $a0, $s6, 0x8
    ctx->pc = 0x4a484cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x4a4850: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x4a4850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x4a4854: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x4a4854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x4a4858: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a4858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a485c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a485cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a4860: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x4a4860u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a4864: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4a4864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a4868: 0x3d0102a  slt         $v0, $fp, $s0
    ctx->pc = 0x4a4868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4a486c: 0x39403  sra         $s2, $v1, 16
    ctx->pc = 0x4a486cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a4870: 0x4b403  sra         $s6, $a0, 16
    ctx->pc = 0x4a4870u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4a4874: 0x641ffd2  bgez        $s2, . + 4 + (-0x2E << 2)
    ctx->pc = 0x4A4874u;
    {
        const bool branch_taken_0x4a4874 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x4A4878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4874u;
        // 0x4a4878: 0x2800b  movn        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4874) {
            ctx->pc = 0x4A47C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a47c0;
        }
    }
    ctx->pc = 0x4A487Cu;
label_4a487c:
    // 0x4a487c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a487cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4880: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4a4880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4a4884: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a4884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a4888: 0x2482d680  addiu       $v0, $a0, -0x2980
    ctx->pc = 0x4a4888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x4a488c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a488cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a4890: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a4890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a4894: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4a4894u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a4898: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4a4898u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a489c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4a489cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a48a0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4a48a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a48a4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4a48a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4a48a8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4a48a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a48ac: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4a48acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4a48b0: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x4a48b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72D6E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72D6E4u, _value); } while (0);
    // 0x4a48b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A48B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A48B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A48B4u;
        // 0x4a48b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A48B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A48BCu;
    // 0x4a48bc: 0x0  nop
    ctx->pc = 0x4a48bcu;
    // NOP
    ctx->pc = 0x4a48c0u;
}
