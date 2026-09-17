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

// Function: sub_00345E40
// Address: 0x345e40 - 0x345f60
void sub_00345E40_0x345e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345E40_0x345e40");
#endif

    switch (ctx->pc) {
        case 0x345eccu: goto label_345ecc;
        case 0x345ee4u: goto label_345ee4;
        case 0x345f10u: goto label_345f10;
        case 0x345f18u: goto label_345f18;
        case 0x345f44u: goto label_345f44;
        default: break;
    }

    ctx->pc = 0x345e40u;

    // 0x345e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x345e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x345e44: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x345e44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x345e48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x345e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x345e4c: 0x24d00d00  addiu       $s0, $a2, 0xD00
    ctx->pc = 0x345e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 3328));
    // 0x345e50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x345e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x345e54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x345e54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345e58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x345e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x345e5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x345e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x345e60: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x345e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x345e64: 0x4824e000  qmfc2.ni    $a0, $vf28
    ctx->pc = 0x345e64u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x345e68: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x345e68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x345e6c: 0x708310a8  pceqw       $v0, $a0, $v1
    ctx->pc = 0x345e6cu;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x345e70: 0x4824e800  qmfc2.ni    $a0, $vf29
    ctx->pc = 0x345e70u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x345e74: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x345e74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x345e78: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x345e78u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x345e7c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x345e7cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x345e80: 0x4824f000  qmfc2.ni    $a0, $vf30
    ctx->pc = 0x345e80u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x345e84: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x345e84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x345e88: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x345e88u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x345e8c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x345e8cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x345e90: 0x4824f800  qmfc2.ni    $a0, $vf31
    ctx->pc = 0x345e90u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x345e94: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x345e94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x345e98: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x345e98u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x345e9c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x345e9cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x345ea0: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x345ea0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x345ea4: 0x70422ec8  ppacb       $a1, $v0, $v0
    ctx->pc = 0x345ea4u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x345ea8: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x345ea8u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x345eac: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x345EACu;
    {
        const bool branch_taken_0x345eac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x345eac) {
            ctx->pc = 0x345EDCu;
            goto label_345edc;
        }
    }
    ctx->pc = 0x345EB4u;
    // 0x345eb4: 0xfa1c0000  sqc2        $vf28, 0x0($s0)
    ctx->pc = 0x345eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x345eb8: 0xfa1d0010  sqc2        $vf29, 0x10($s0)
    ctx->pc = 0x345eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x345ebc: 0xfa1e0020  sqc2        $vf30, 0x20($s0)
    ctx->pc = 0x345ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x345ec0: 0xfa1f0030  sqc2        $vf31, 0x30($s0)
    ctx->pc = 0x345ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x345ec4: 0xc0c88a2  jal         func_322288
    ctx->pc = 0x345EC4u;
    SET_GPR_U32(ctx, 31, 0x345ECCu);
    ctx->pc = 0x345EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345EC4u;
    // 0x345ec8: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322288u, 0x345EC4u, 0x345ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345ECCu;
label_345ecc:
    // 0x345ecc: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x345eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x345ed0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x345ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x345ed4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x345ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x345ed8: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x345ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_345edc:
    // 0x345edc: 0xc0d17d8  jal         func_345F60
    ctx->pc = 0x345EDCu;
    SET_GPR_U32(ctx, 31, 0x345EE4u);
    ctx->pc = 0x345EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345EDCu;
    // 0x345ee0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345F60u, 0x345EDCu, 0x345EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345EE4u;
label_345ee4:
    // 0x345ee4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x345EE4u;
    {
        const bool branch_taken_0x345ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345EE4u;
        // 0x345ee8: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345ee4) {
            ctx->pc = 0x345F44u;
            goto label_345f44;
        }
    }
    ctx->pc = 0x345EECu;
    // 0x345eec: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x345eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x345ef0: 0x266303c0  addiu       $v1, $s3, 0x3C0
    ctx->pc = 0x345ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 960));
    // 0x345ef4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x345ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x345ef8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x345ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x345efc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x345efcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x345f00: 0x9650000a  lhu         $s0, 0xA($s2)
    ctx->pc = 0x345f00u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x345f04: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x345F04u;
    {
        const bool branch_taken_0x345f04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x345F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345F04u;
        // 0x345f08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345f04) {
            ctx->pc = 0x345F28u;
            goto label_345f28;
        }
    }
    ctx->pc = 0x345F0Cu;
    // 0x345f0c: 0x0  nop
    ctx->pc = 0x345f0cu;
    // NOP
label_345f10:
    // 0x345f10: 0xc0d1768  jal         func_345DA0
    ctx->pc = 0x345F10u;
    SET_GPR_U32(ctx, 31, 0x345F18u);
    ctx->pc = 0x345F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345F10u;
    // 0x345f14: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345DA0u, 0x345F10u, 0x345F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345F18u;
label_345f18:
    // 0x345f18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x345f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345f1c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x345f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x345f20: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x345F20u;
    {
        const bool branch_taken_0x345f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x345f20) {
            ctx->pc = 0x345F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345f10;
        }
    }
    ctx->pc = 0x345F28u;
label_345f28:
    // 0x345f28: 0x266403c0  addiu       $a0, $s3, 0x3C0
    ctx->pc = 0x345f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 960));
    // 0x345f2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x345f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x345f30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x345f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x345f34: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x345F34u;
    {
        const bool branch_taken_0x345f34 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x345F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345F34u;
        // 0x345f38: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345f34) {
            ctx->pc = 0x345F44u;
            goto label_345f44;
        }
    }
    ctx->pc = 0x345F3Cu;
    // 0x345f3c: 0xc0ce218  jal         func_338860
    ctx->pc = 0x345F3Cu;
    SET_GPR_U32(ctx, 31, 0x345F44u);
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x345F3Cu, 0x345F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345F44u;
label_345f44:
    // 0x345f44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x345f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345f48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x345f48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x345f4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x345f4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345f50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x345f50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x345f54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x345f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x345f58: 0x3e00008  jr          $ra
    ctx->pc = 0x345F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345F58u;
        // 0x345f5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345F60u;
}
