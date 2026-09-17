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

// Function: sub_00346848
// Address: 0x346848 - 0x346970
void sub_00346848_0x346848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346848_0x346848");
#endif

    switch (ctx->pc) {
        case 0x3468dcu: goto label_3468dc;
        case 0x346918u: goto label_346918;
        case 0x346920u: goto label_346920;
        case 0x34694cu: goto label_34694c;
        default: break;
    }

    ctx->pc = 0x346848u;

    // 0x346848: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x346848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34684c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x34684cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x346850: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x346850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x346854: 0x24d00d00  addiu       $s0, $a2, 0xD00
    ctx->pc = 0x346854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 3328));
    // 0x346858: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x346858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34685c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x34685cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346860: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x346860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x346864: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x346864u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346868: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x346868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34686c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x34686cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x346870: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x346870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x346874: 0x4824e000  qmfc2.ni    $a0, $vf28
    ctx->pc = 0x346874u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x346878: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x346878u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34687c: 0x708310a8  pceqw       $v0, $a0, $v1
    ctx->pc = 0x34687cu;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x346880: 0x4824e800  qmfc2.ni    $a0, $vf29
    ctx->pc = 0x346880u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x346884: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x346884u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x346888: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x346888u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x34688c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x34688cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x346890: 0x4824f000  qmfc2.ni    $a0, $vf30
    ctx->pc = 0x346890u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x346894: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x346894u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x346898: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x346898u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x34689c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x34689cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3468a0: 0x4824f800  qmfc2.ni    $a0, $vf31
    ctx->pc = 0x3468a0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x3468a4: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x3468a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3468a8: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x3468a8u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x3468ac: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3468acu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3468b0: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x3468b0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x3468b4: 0x70422ec8  ppacb       $a1, $v0, $v0
    ctx->pc = 0x3468b4u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x3468b8: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x3468b8u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x3468bc: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3468BCu;
    {
        const bool branch_taken_0x3468bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3468bc) {
            ctx->pc = 0x3468C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3468BCu;
            // 0x3468c0: 0x3c140040  lui         $s4, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3468F0u;
            goto label_3468f0;
        }
    }
    ctx->pc = 0x3468C4u;
    // 0x3468c4: 0xfa1c0000  sqc2        $vf28, 0x0($s0)
    ctx->pc = 0x3468c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x3468c8: 0xfa1d0010  sqc2        $vf29, 0x10($s0)
    ctx->pc = 0x3468c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x3468cc: 0xfa1e0020  sqc2        $vf30, 0x20($s0)
    ctx->pc = 0x3468ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x3468d0: 0xfa1f0030  sqc2        $vf31, 0x30($s0)
    ctx->pc = 0x3468d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x3468d4: 0xc0c88a2  jal         func_322288
    ctx->pc = 0x3468D4u;
    SET_GPR_U32(ctx, 31, 0x3468DCu);
    ctx->pc = 0x3468D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3468D4u;
    // 0x3468d8: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322288u, 0x3468D4u, 0x3468DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3468DCu;
label_3468dc:
    // 0x3468dc: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x3468dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3468e0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3468e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3468e4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3468e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3468e8: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x3468e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x3468ec: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x3468ecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
label_3468f0:
    // 0x3468f0: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x3468f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3468f4: 0x268303c0  addiu       $v1, $s4, 0x3C0
    ctx->pc = 0x3468f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 960));
    // 0x3468f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3468f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3468fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3468fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x346900: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x346900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x346904: 0x9650000a  lhu         $s0, 0xA($s2)
    ctx->pc = 0x346904u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x346908: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x346908u;
    {
        const bool branch_taken_0x346908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346908u;
        // 0x34690c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346908) {
            ctx->pc = 0x346930u;
            goto label_346930;
        }
    }
    ctx->pc = 0x346910u;
    // 0x346910: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x346910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346914: 0x0  nop
    ctx->pc = 0x346914u;
    // NOP
label_346918:
    // 0x346918: 0xc0d19d0  jal         func_346740
    ctx->pc = 0x346918u;
    SET_GPR_U32(ctx, 31, 0x346920u);
    ctx->pc = 0x34691Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346918u;
    // 0x34691c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346740u, 0x346918u, 0x346920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346920u;
label_346920:
    // 0x346920: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x346920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346924: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x346924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x346928: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x346928u;
    {
        const bool branch_taken_0x346928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346928u;
        // 0x34692c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346928) {
            ctx->pc = 0x346918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346918;
        }
    }
    ctx->pc = 0x346930u;
label_346930:
    // 0x346930: 0x268403c0  addiu       $a0, $s4, 0x3C0
    ctx->pc = 0x346930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 960));
    // 0x346934: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x346934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x346938: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x346938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34693c: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34693Cu;
    {
        const bool branch_taken_0x34693c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x346940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34693Cu;
        // 0x346940: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34693c) {
            ctx->pc = 0x34694Cu;
            goto label_34694c;
        }
    }
    ctx->pc = 0x346944u;
    // 0x346944: 0xc0ce218  jal         func_338860
    ctx->pc = 0x346944u;
    SET_GPR_U32(ctx, 31, 0x34694Cu);
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x346944u, 0x34694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34694Cu;
label_34694c:
    // 0x34694c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34694cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346950: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x346950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x346954: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x346954u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346958: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x346958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34695c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x34695cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x346960: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x346960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x346964: 0x3e00008  jr          $ra
    ctx->pc = 0x346964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346964u;
        // 0x346968: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34696Cu;
    // 0x34696c: 0x0  nop
    ctx->pc = 0x34696cu;
    // NOP
    ctx->pc = 0x346970u;
}
