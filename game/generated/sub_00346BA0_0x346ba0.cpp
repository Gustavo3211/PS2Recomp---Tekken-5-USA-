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

// Function: sub_00346BA0
// Address: 0x346ba0 - 0x346ce0
void sub_00346BA0_0x346ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346BA0_0x346ba0");
#endif

    switch (ctx->pc) {
        case 0x346c3cu: goto label_346c3c;
        case 0x346c58u: goto label_346c58;
        case 0x346c80u: goto label_346c80;
        case 0x346c88u: goto label_346c88;
        case 0x346cb8u: goto label_346cb8;
        default: break;
    }

    ctx->pc = 0x346ba0u;

    // 0x346ba0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x346ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x346ba4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x346ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x346ba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x346ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x346bac: 0x24f00d00  addiu       $s0, $a3, 0xD00
    ctx->pc = 0x346bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 3328));
    // 0x346bb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x346bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x346bb4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x346bb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346bb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x346bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x346bbc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x346bbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346bc0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x346bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x346bc4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x346bc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346bc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x346bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x346bcc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x346bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x346bd0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x346bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x346bd4: 0x4824e000  qmfc2.ni    $a0, $vf28
    ctx->pc = 0x346bd4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x346bd8: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x346bd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x346bdc: 0x708310a8  pceqw       $v0, $a0, $v1
    ctx->pc = 0x346bdcu;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x346be0: 0x4824e800  qmfc2.ni    $a0, $vf29
    ctx->pc = 0x346be0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x346be4: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x346be4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x346be8: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x346be8u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x346bec: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x346becu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x346bf0: 0x4824f000  qmfc2.ni    $a0, $vf30
    ctx->pc = 0x346bf0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x346bf4: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x346bf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x346bf8: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x346bf8u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x346bfc: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x346bfcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x346c00: 0x4824f800  qmfc2.ni    $a0, $vf31
    ctx->pc = 0x346c00u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x346c04: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x346c04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x346c08: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x346c08u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x346c0c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x346c0cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x346c10: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x346c10u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x346c14: 0x70422ec8  ppacb       $a1, $v0, $v0
    ctx->pc = 0x346c14u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x346c18: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x346c18u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x346c1c: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x346C1Cu;
    {
        const bool branch_taken_0x346c1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x346c1c) {
            ctx->pc = 0x346C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346C1Cu;
            // 0x346c20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346C50u;
            goto label_346c50;
        }
    }
    ctx->pc = 0x346C24u;
    // 0x346c24: 0xfa1c0000  sqc2        $vf28, 0x0($s0)
    ctx->pc = 0x346c24u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x346c28: 0xfa1d0010  sqc2        $vf29, 0x10($s0)
    ctx->pc = 0x346c28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x346c2c: 0xfa1e0020  sqc2        $vf30, 0x20($s0)
    ctx->pc = 0x346c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x346c30: 0xfa1f0030  sqc2        $vf31, 0x30($s0)
    ctx->pc = 0x346c30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x346c34: 0xc0c88a2  jal         func_322288
    ctx->pc = 0x346C34u;
    SET_GPR_U32(ctx, 31, 0x346C3Cu);
    ctx->pc = 0x346C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346C34u;
    // 0x346c38: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322288u, 0x346C34u, 0x346C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346C3Cu;
label_346c3c:
    // 0x346c3c: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x346c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x346c40: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x346c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x346c44: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x346c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x346c48: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x346c48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x346c4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x346c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_346c50:
    // 0x346c50: 0xc0cb70e  jal         func_32DC38
    ctx->pc = 0x346C50u;
    SET_GPR_U32(ctx, 31, 0x346C58u);
    ctx->pc = 0x346C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346C50u;
    // 0x346c54: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DC38u, 0x346C50u, 0x346C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346C58u;
label_346c58:
    // 0x346c58: 0x26a303c0  addiu       $v1, $s5, 0x3C0
    ctx->pc = 0x346c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 960));
    // 0x346c5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x346c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x346c60: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x346c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x346c64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x346c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x346c68: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x346c68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x346c6c: 0x9670000a  lhu         $s0, 0xA($s3)
    ctx->pc = 0x346c6cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x346c70: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x346C70u;
    {
        const bool branch_taken_0x346c70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x346C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C70u;
        // 0x346c74: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346c70) {
            ctx->pc = 0x346C9Cu;
            goto label_346c9c;
        }
    }
    ctx->pc = 0x346C78u;
    // 0x346c78: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x346c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346c7c: 0x0  nop
    ctx->pc = 0x346c7cu;
    // NOP
label_346c80:
    // 0x346c80: 0xc0d1aa0  jal         func_346A80
    ctx->pc = 0x346C80u;
    SET_GPR_U32(ctx, 31, 0x346C88u);
    ctx->pc = 0x346C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346C80u;
    // 0x346c84: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346A80u, 0x346C80u, 0x346C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346C88u;
label_346c88:
    // 0x346c88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x346c88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x346c8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x346c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346c90: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x346c90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x346c94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x346C94u;
    {
        const bool branch_taken_0x346c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x346C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C94u;
        // 0x346c98: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346c94) {
            ctx->pc = 0x346C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346c80;
        }
    }
    ctx->pc = 0x346C9Cu;
label_346c9c:
    // 0x346c9c: 0x26a403c0  addiu       $a0, $s5, 0x3C0
    ctx->pc = 0x346c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 960));
    // 0x346ca0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x346ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x346ca4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x346ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x346ca8: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x346CA8u;
    {
        const bool branch_taken_0x346ca8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x346CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346CA8u;
        // 0x346cac: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346ca8) {
            ctx->pc = 0x346CB8u;
            goto label_346cb8;
        }
    }
    ctx->pc = 0x346CB0u;
    // 0x346cb0: 0xc0ce218  jal         func_338860
    ctx->pc = 0x346CB0u;
    SET_GPR_U32(ctx, 31, 0x346CB8u);
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x346CB0u, 0x346CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346CB8u;
label_346cb8:
    // 0x346cb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346cb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346cbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x346cbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x346cc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x346cc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346cc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x346cc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x346cc8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x346cc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x346ccc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x346cccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x346cd0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x346cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x346cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x346CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346CD4u;
        // 0x346cd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346CDCu;
    // 0x346cdc: 0x0  nop
    ctx->pc = 0x346cdcu;
    // NOP
    ctx->pc = 0x346ce0u;
}
