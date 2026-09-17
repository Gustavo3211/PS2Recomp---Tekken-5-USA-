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

// Function: sub_003461D0
// Address: 0x3461d0 - 0x346308
void sub_003461D0_0x3461d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003461D0_0x3461d0");
#endif

    switch (ctx->pc) {
        case 0x346264u: goto label_346264;
        case 0x34627cu: goto label_34627c;
        case 0x34628cu: goto label_34628c;
        case 0x3462b0u: goto label_3462b0;
        case 0x3462b8u: goto label_3462b8;
        case 0x3462e4u: goto label_3462e4;
        default: break;
    }

    ctx->pc = 0x3461d0u;

    // 0x3461d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3461d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3461d4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x3461d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x3461d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3461d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3461dc: 0x24d00d00  addiu       $s0, $a2, 0xD00
    ctx->pc = 0x3461dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 3328));
    // 0x3461e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3461e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3461e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3461e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3461e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3461e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3461ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3461ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3461f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3461f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3461f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3461f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3461f8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3461f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3461fc: 0x4824e000  qmfc2.ni    $a0, $vf28
    ctx->pc = 0x3461fcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x346200: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x346200u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x346204: 0x708310a8  pceqw       $v0, $a0, $v1
    ctx->pc = 0x346204u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x346208: 0x4824e800  qmfc2.ni    $a0, $vf29
    ctx->pc = 0x346208u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x34620c: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x34620cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x346210: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x346210u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x346214: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x346214u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x346218: 0x4824f000  qmfc2.ni    $a0, $vf30
    ctx->pc = 0x346218u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x34621c: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x34621cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x346220: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x346220u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x346224: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x346224u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x346228: 0x4824f800  qmfc2.ni    $a0, $vf31
    ctx->pc = 0x346228u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x34622c: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x34622cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x346230: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x346230u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x346234: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x346234u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x346238: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x346238u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x34623c: 0x70422ec8  ppacb       $a1, $v0, $v0
    ctx->pc = 0x34623cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x346240: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x346240u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x346244: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x346244u;
    {
        const bool branch_taken_0x346244 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x346244) {
            ctx->pc = 0x346274u;
            goto label_346274;
        }
    }
    ctx->pc = 0x34624Cu;
    // 0x34624c: 0xfa1c0000  sqc2        $vf28, 0x0($s0)
    ctx->pc = 0x34624cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x346250: 0xfa1d0010  sqc2        $vf29, 0x10($s0)
    ctx->pc = 0x346250u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x346254: 0xfa1e0020  sqc2        $vf30, 0x20($s0)
    ctx->pc = 0x346254u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x346258: 0xfa1f0030  sqc2        $vf31, 0x30($s0)
    ctx->pc = 0x346258u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x34625c: 0xc0c88a2  jal         func_322288
    ctx->pc = 0x34625Cu;
    SET_GPR_U32(ctx, 31, 0x346264u);
    ctx->pc = 0x346260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34625Cu;
    // 0x346260: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322288u, 0x34625Cu, 0x346264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346264u;
label_346264:
    // 0x346264: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x346264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x346268: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x346268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x34626c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34626cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x346270: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x346270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_346274:
    // 0x346274: 0xc0d17d8  jal         func_345F60
    ctx->pc = 0x346274u;
    SET_GPR_U32(ctx, 31, 0x34627Cu);
    ctx->pc = 0x346278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346274u;
    // 0x346278: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345F60u, 0x346274u, 0x34627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34627Cu;
label_34627c:
    // 0x34627c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x34627Cu;
    {
        const bool branch_taken_0x34627c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34627Cu;
        // 0x346280: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34627c) {
            ctx->pc = 0x3462E4u;
            goto label_3462e4;
        }
    }
    ctx->pc = 0x346284u;
    // 0x346284: 0xc0cb70e  jal         func_32DC38
    ctx->pc = 0x346284u;
    SET_GPR_U32(ctx, 31, 0x34628Cu);
    ctx->pc = 0x346288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346284u;
    // 0x346288: 0x3c140040  lui         $s4, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DC38u, 0x346284u, 0x34628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34628Cu;
label_34628c:
    // 0x34628c: 0x268303c0  addiu       $v1, $s4, 0x3C0
    ctx->pc = 0x34628cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 960));
    // 0x346290: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x346290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x346294: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x346294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x346298: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x346298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34629c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34629cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3462a0: 0x9650000a  lhu         $s0, 0xA($s2)
    ctx->pc = 0x3462a0u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x3462a4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3462A4u;
    {
        const bool branch_taken_0x3462a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3462A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3462A4u;
        // 0x3462a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3462a4) {
            ctx->pc = 0x3462C8u;
            goto label_3462c8;
        }
    }
    ctx->pc = 0x3462ACu;
    // 0x3462ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3462acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3462b0:
    // 0x3462b0: 0xc0d184a  jal         func_346128
    ctx->pc = 0x3462B0u;
    SET_GPR_U32(ctx, 31, 0x3462B8u);
    ctx->pc = 0x3462B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3462B0u;
    // 0x3462b4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346128u, 0x3462B0u, 0x3462B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3462B8u;
label_3462b8:
    // 0x3462b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3462b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3462bc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x3462bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3462c0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3462C0u;
    {
        const bool branch_taken_0x3462c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3462C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3462C0u;
        // 0x3462c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3462c0) {
            ctx->pc = 0x3462B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3462b0;
        }
    }
    ctx->pc = 0x3462C8u;
label_3462c8:
    // 0x3462c8: 0x268403c0  addiu       $a0, $s4, 0x3C0
    ctx->pc = 0x3462c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 960));
    // 0x3462cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3462ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3462d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3462d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3462d4: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3462D4u;
    {
        const bool branch_taken_0x3462d4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3462D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3462D4u;
        // 0x3462d8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3462d4) {
            ctx->pc = 0x3462E4u;
            goto label_3462e4;
        }
    }
    ctx->pc = 0x3462DCu;
    // 0x3462dc: 0xc0ce218  jal         func_338860
    ctx->pc = 0x3462DCu;
    SET_GPR_U32(ctx, 31, 0x3462E4u);
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x3462DCu, 0x3462E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3462E4u;
label_3462e4:
    // 0x3462e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3462e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3462e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3462e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3462ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3462ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3462f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3462f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3462f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3462f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3462f8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3462f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3462fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3462FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3462FCu;
        // 0x346300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3462FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346304u;
    // 0x346304: 0x0  nop
    ctx->pc = 0x346304u;
    // NOP
    ctx->pc = 0x346308u;
}
