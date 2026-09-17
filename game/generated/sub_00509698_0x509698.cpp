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

// Function: sub_00509698
// Address: 0x509698 - 0x509800
void sub_00509698_0x509698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509698_0x509698");
#endif

    switch (ctx->pc) {
        case 0x509718u: goto label_509718;
        case 0x509720u: goto label_509720;
        case 0x509770u: goto label_509770;
        default: break;
    }

    ctx->pc = 0x509698u;

    // 0x509698: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x509698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x50969c: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50969cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x5096a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x5096a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x5096a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x5096a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5096a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x5096a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x5096ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x5096acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5096b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x5096b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x5096b4: 0x3c14008f  lui         $s4, 0x8F
    ctx->pc = 0x5096b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)143 << 16));
    // 0x5096b8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x5096b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x5096bc: 0x265600b4  addiu       $s6, $s2, 0xB4
    ctx->pc = 0x5096bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
    // 0x5096c0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x5096c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x5096c4: 0x3c1e008f  lui         $fp, 0x8F
    ctx->pc = 0x5096c4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)143 << 16));
    // 0x5096c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5096c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5096cc: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x5096ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x5096d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x5096d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x5096d4: 0x27c7c5e4  addiu       $a3, $fp, -0x3A1C
    ctx->pc = 0x5096d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952420));
    // 0x5096d8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x5096d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x5096dc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x5096dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x5096e0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x5096e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x5096e4: 0x96c40000  lhu         $a0, 0x0($s6)
    ctx->pc = 0x5096e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x5096e8: 0xa684c5e2  sh          $a0, -0x3A1E($s4)
    ctx->pc = 0x5096e8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8EC5E2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8EC5E2u, _value); } while (0);
    // 0x5096ec: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x5096ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x5096f0: 0x9642009e  lhu         $v0, 0x9E($s2)
    ctx->pc = 0x5096f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 158)));
    // 0x5096f4: 0xa4a2c5de  sh          $v0, -0x3A22($a1)
    ctx->pc = 0x5096f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294952414), (uint16_t)GPR_U32(ctx, 2));
    // 0x5096f8: 0x964300a0  lhu         $v1, 0xA0($s2)
    ctx->pc = 0x5096f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x5096fc: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x5096fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x509700: 0x18800025  blez        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x509700u;
    {
        const bool branch_taken_0x509700 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x509704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509700u;
        // 0x509704: 0xa4c3c5e0  sh          $v1, -0x3A20($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 4294952416), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509700) {
            ctx->pc = 0x509798u;
            goto label_509798;
        }
    }
    ctx->pc = 0x509708u;
    // 0x509708: 0x3c15008f  lui         $s5, 0x8F
    ctx->pc = 0x509708u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)143 << 16));
    // 0x50970c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x50970cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509710: 0x26b1c5dc  addiu       $s1, $s5, -0x3A24
    ctx->pc = 0x509710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952412));
    // 0x509714: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x509714u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
label_509718:
    // 0x509718: 0xc143292  jal         func_50CA48
    ctx->pc = 0x509718u;
    SET_GPR_U32(ctx, 31, 0x509720u);
    ctx->pc = 0x50CA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50CA48u, 0x509718u, 0x509720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x509720u;
label_509720:
    // 0x509720: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x509720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509724: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x509724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x509728: 0x2843000a  slti        $v1, $v0, 0xA
    ctx->pc = 0x509728u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x50972c: 0x2445fff6  addiu       $a1, $v0, -0xA
    ctx->pc = 0x50972cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x509730: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x509730u;
    {
        const bool branch_taken_0x509730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x509734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509730u;
        // 0x509734: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509730) {
            ctx->pc = 0x50973Cu;
            goto label_50973c;
        }
    }
    ctx->pc = 0x509738u;
    // 0x509738: 0xa6250000  sh          $a1, 0x0($s1)
    ctx->pc = 0x509738u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 5));
label_50973c:
    // 0x50973c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x50973cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509740: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x509740u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x509744: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x509744u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x509748: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x509748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x50974c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x50974cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x509750: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x509750u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509754: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x509754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x509758: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x509758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50975c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50975cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x509760: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x509760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x509764: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x509764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x509768: 0xc14256e  jal         func_5095B8
    ctx->pc = 0x509768u;
    SET_GPR_U32(ctx, 31, 0x509770u);
    ctx->pc = 0x50976Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x509768u;
    // 0x50976c: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5095B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5095B8u, 0x509768u, 0x509770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x509770u;
label_509770:
    // 0x509770: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x509770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x509774: 0x8683c5e2  lh          $v1, -0x3A1E($s4)
    ctx->pc = 0x509774u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294952418)));
    // 0x509778: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x509778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50977c: 0x29c03  sra         $s3, $v0, 16
    ctx->pc = 0x50977cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
    // 0x509780: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x509780u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x509784: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x509784u;
    {
        const bool branch_taken_0x509784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x509784) {
            ctx->pc = 0x509718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_509718;
        }
    }
    ctx->pc = 0x50978Cu;
    // 0x50978c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x50978Cu;
    {
        const bool branch_taken_0x50978c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x509790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50978Cu;
        // 0x509790: 0x26a6c5dc  addiu       $a2, $s5, -0x3A24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952412));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50978c) {
            ctx->pc = 0x5097A0u;
            goto label_5097a0;
        }
    }
    ctx->pc = 0x509794u;
    // 0x509794: 0x0  nop
    ctx->pc = 0x509794u;
    // NOP
label_509798:
    // 0x509798: 0x3c15008f  lui         $s5, 0x8F
    ctx->pc = 0x509798u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)143 << 16));
    // 0x50979c: 0x26a6c5dc  addiu       $a2, $s5, -0x3A24
    ctx->pc = 0x50979cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952412));
label_5097a0:
    // 0x5097a0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x5097a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5097a4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x5097a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x5097a8: 0x27c5c5e4  addiu       $a1, $fp, -0x3A1C
    ctx->pc = 0x5097a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952420));
    // 0x5097ac: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x5097acu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x5097b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5097b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5097b4: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x5097b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x5097b8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x5097b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5097bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x5097bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x5097c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5097c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5097c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x5097c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x5097c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5097c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5097cc: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x5097ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x5097d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x5097d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5097d4: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x5097d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x5097d8: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x5097d8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x5097dc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x5097dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5097e0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x5097e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x5097e4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x5097e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x5097e8: 0xae4400b0  sw          $a0, 0xB0($s2)
    ctx->pc = 0x5097e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 4));
    // 0x5097ec: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x5097ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x5097f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5097f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5097f4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x5097f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x5097f8: 0x3e00008  jr          $ra
    ctx->pc = 0x5097F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5097FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5097F8u;
        // 0x5097fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5097F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x509800u;
}
