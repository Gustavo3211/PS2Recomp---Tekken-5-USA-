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

// Function: sub_004B3FA0
// Address: 0x4b3fa0 - 0x4b4120
void sub_004B3FA0_0x4b3fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3FA0_0x4b3fa0");
#endif

    switch (ctx->pc) {
        case 0x4b3fa0u: goto label_4b3fa0;
        case 0x4b3fa4u: goto label_4b3fa4;
        case 0x4b3fa8u: goto label_4b3fa8;
        case 0x4b3facu: goto label_4b3fac;
        case 0x4b3fb0u: goto label_4b3fb0;
        case 0x4b3fb4u: goto label_4b3fb4;
        case 0x4b3fb8u: goto label_4b3fb8;
        case 0x4b3fbcu: goto label_4b3fbc;
        case 0x4b3fc0u: goto label_4b3fc0;
        case 0x4b3fc4u: goto label_4b3fc4;
        case 0x4b3fc8u: goto label_4b3fc8;
        case 0x4b3fccu: goto label_4b3fcc;
        case 0x4b3fd0u: goto label_4b3fd0;
        case 0x4b3fd4u: goto label_4b3fd4;
        case 0x4b3fd8u: goto label_4b3fd8;
        case 0x4b3fdcu: goto label_4b3fdc;
        case 0x4b3fe0u: goto label_4b3fe0;
        case 0x4b3fe4u: goto label_4b3fe4;
        case 0x4b3fe8u: goto label_4b3fe8;
        case 0x4b3fecu: goto label_4b3fec;
        case 0x4b3ff0u: goto label_4b3ff0;
        case 0x4b3ff4u: goto label_4b3ff4;
        case 0x4b3ff8u: goto label_4b3ff8;
        case 0x4b3ffcu: goto label_4b3ffc;
        case 0x4b4000u: goto label_4b4000;
        case 0x4b4004u: goto label_4b4004;
        case 0x4b4008u: goto label_4b4008;
        case 0x4b400cu: goto label_4b400c;
        case 0x4b4010u: goto label_4b4010;
        case 0x4b4014u: goto label_4b4014;
        case 0x4b4018u: goto label_4b4018;
        case 0x4b401cu: goto label_4b401c;
        case 0x4b4020u: goto label_4b4020;
        case 0x4b4024u: goto label_4b4024;
        case 0x4b4028u: goto label_4b4028;
        case 0x4b402cu: goto label_4b402c;
        case 0x4b4030u: goto label_4b4030;
        case 0x4b4034u: goto label_4b4034;
        case 0x4b4038u: goto label_4b4038;
        case 0x4b403cu: goto label_4b403c;
        case 0x4b4040u: goto label_4b4040;
        case 0x4b4044u: goto label_4b4044;
        case 0x4b4048u: goto label_4b4048;
        case 0x4b404cu: goto label_4b404c;
        case 0x4b4050u: goto label_4b4050;
        case 0x4b4054u: goto label_4b4054;
        case 0x4b4058u: goto label_4b4058;
        case 0x4b405cu: goto label_4b405c;
        case 0x4b4060u: goto label_4b4060;
        case 0x4b4064u: goto label_4b4064;
        case 0x4b4068u: goto label_4b4068;
        case 0x4b406cu: goto label_4b406c;
        case 0x4b4070u: goto label_4b4070;
        case 0x4b4074u: goto label_4b4074;
        case 0x4b4078u: goto label_4b4078;
        case 0x4b407cu: goto label_4b407c;
        case 0x4b4080u: goto label_4b4080;
        case 0x4b4084u: goto label_4b4084;
        case 0x4b4088u: goto label_4b4088;
        case 0x4b408cu: goto label_4b408c;
        case 0x4b4090u: goto label_4b4090;
        case 0x4b4094u: goto label_4b4094;
        case 0x4b4098u: goto label_4b4098;
        case 0x4b409cu: goto label_4b409c;
        case 0x4b40a0u: goto label_4b40a0;
        case 0x4b40a4u: goto label_4b40a4;
        case 0x4b40a8u: goto label_4b40a8;
        case 0x4b40acu: goto label_4b40ac;
        case 0x4b40b0u: goto label_4b40b0;
        case 0x4b40b4u: goto label_4b40b4;
        case 0x4b40b8u: goto label_4b40b8;
        case 0x4b40bcu: goto label_4b40bc;
        case 0x4b40c0u: goto label_4b40c0;
        case 0x4b40c4u: goto label_4b40c4;
        case 0x4b40c8u: goto label_4b40c8;
        case 0x4b40ccu: goto label_4b40cc;
        case 0x4b40d0u: goto label_4b40d0;
        case 0x4b40d4u: goto label_4b40d4;
        case 0x4b40d8u: goto label_4b40d8;
        case 0x4b40dcu: goto label_4b40dc;
        case 0x4b40e0u: goto label_4b40e0;
        case 0x4b40e4u: goto label_4b40e4;
        case 0x4b40e8u: goto label_4b40e8;
        case 0x4b40ecu: goto label_4b40ec;
        case 0x4b40f0u: goto label_4b40f0;
        case 0x4b40f4u: goto label_4b40f4;
        case 0x4b40f8u: goto label_4b40f8;
        case 0x4b40fcu: goto label_4b40fc;
        case 0x4b4100u: goto label_4b4100;
        case 0x4b4104u: goto label_4b4104;
        case 0x4b4108u: goto label_4b4108;
        case 0x4b410cu: goto label_4b410c;
        case 0x4b4110u: goto label_4b4110;
        case 0x4b4114u: goto label_4b4114;
        case 0x4b4118u: goto label_4b4118;
        case 0x4b411cu: goto label_4b411c;
        default: break;
    }

    ctx->pc = 0x4b3fa0u;

label_4b3fa0:
    // 0x4b3fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b3fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b3fa4:
    // 0x4b3fa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b3fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b3fa8:
    // 0x4b3fa8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b3fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4b3fac:
    // 0x4b3fac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4b3facu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b3fb0:
    // 0x4b3fb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b3fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4b3fb4:
    // 0x4b3fb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b3fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4b3fb8:
    // 0x4b3fb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b3fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b3fbc:
    // 0x4b3fbc: 0xc1232f2  jal         func_48CBC8
label_4b3fc0:
    if (ctx->pc == 0x4B3FC0u) {
        ctx->pc = 0x4B3FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3FBCu;
        // 0x4b3fc0: 0x267001b4  addiu       $s0, $s3, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3FC4u;
        goto label_4b3fc4;
    }
    ctx->pc = 0x4B3FBCu;
    SET_GPR_U32(ctx, 31, 0x4B3FC4u);
    ctx->pc = 0x4B3FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3FBCu;
    // 0x4b3fc0: 0x267001b4  addiu       $s0, $s3, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4B3FBCu, 0x4B3FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3FC4u;
label_4b3fc4:
    // 0x4b3fc4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b3fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4b3fc8:
    // 0x4b3fc8: 0xac620d64  sw          $v0, 0xD64($v1)
    ctx->pc = 0x4b3fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3428), GPR_U32(ctx, 2));
label_4b3fcc:
    // 0x4b3fcc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b3fccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4b3fd0:
    // 0x4b3fd0: 0x4400035  bltz        $v0, . + 4 + (0x35 << 2)
label_4b3fd4:
    if (ctx->pc == 0x4B3FD4u) {
        ctx->pc = 0x4B3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3FD0u;
        // 0x4b3fd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3FD8u;
        goto label_4b3fd8;
    }
    ctx->pc = 0x4B3FD0u;
    {
        const bool branch_taken_0x4b3fd0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3FD0u;
        // 0x4b3fd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3fd0) {
            ctx->pc = 0x4B40A8u;
            goto label_4b40a8;
        }
    }
    ctx->pc = 0x4B3FD8u;
label_4b3fd8:
    // 0x4b3fd8: 0xc12b642  jal         func_4AD908
label_4b3fdc:
    if (ctx->pc == 0x4B3FDCu) {
        ctx->pc = 0x4B3FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3FD8u;
        // 0x4b3fdc: 0x24118000  addiu       $s1, $zero, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3FE0u;
        goto label_4b3fe0;
    }
    ctx->pc = 0x4B3FD8u;
    SET_GPR_U32(ctx, 31, 0x4B3FE0u);
    ctx->pc = 0x4B3FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3FD8u;
    // 0x4b3fdc: 0x24118000  addiu       $s1, $zero, -0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4B3FD8u, 0x4B3FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3FE0u;
label_4b3fe0:
    // 0x4b3fe0: 0xa660015e  sh          $zero, 0x15E($s3)
    ctx->pc = 0x4b3fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 350), (uint16_t)GPR_U32(ctx, 0));
label_4b3fe4:
    // 0x4b3fe4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x4b3fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4b3fe8:
    // 0x4b3fe8: 0xa6600160  sh          $zero, 0x160($s3)
    ctx->pc = 0x4b3fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 352), (uint16_t)GPR_U32(ctx, 0));
label_4b3fec:
    // 0x4b3fec: 0xa6620158  sh          $v0, 0x158($s3)
    ctx->pc = 0x4b3fecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 344), (uint16_t)GPR_U32(ctx, 2));
label_4b3ff0:
    // 0x4b3ff0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b3ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b3ff4:
    // 0x4b3ff4: 0xa6600164  sh          $zero, 0x164($s3)
    ctx->pc = 0x4b3ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 356), (uint16_t)GPR_U32(ctx, 0));
label_4b3ff8:
    // 0x4b3ff8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x4b3ff8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b3ffc:
    // 0x4b3ffc: 0xa6600166  sh          $zero, 0x166($s3)
    ctx->pc = 0x4b3ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 358), (uint16_t)GPR_U32(ctx, 0));
label_4b4000:
    // 0x4b4000: 0xa6600162  sh          $zero, 0x162($s3)
    ctx->pc = 0x4b4000u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 354), (uint16_t)GPR_U32(ctx, 0));
label_4b4004:
    // 0x4b4004: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b4004u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4b4008:
    // 0x4b4008: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b4008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4b400c:
    // 0x4b400c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4b400cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_4b4010:
    // 0x4b4010: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4b4010u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
label_4b4014:
    // 0x4b4014: 0xc12b5dc  jal         func_4AD770
label_4b4018:
    if (ctx->pc == 0x4B4018u) {
        ctx->pc = 0x4B4018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4014u;
        // 0x4b4018: 0x26100d5c  addiu       $s0, $s0, 0xD5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B401Cu;
        goto label_4b401c;
    }
    ctx->pc = 0x4B4014u;
    SET_GPR_U32(ctx, 31, 0x4B401Cu);
    ctx->pc = 0x4B4018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4014u;
    // 0x4b4018: 0x26100d5c  addiu       $s0, $s0, 0xD5C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4B4014u, 0x4B401Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B401Cu;
label_4b401c:
    // 0x4b401c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b401cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4b4020:
    // 0x4b4020: 0x24840d50  addiu       $a0, $a0, 0xD50
    ctx->pc = 0x4b4020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3408));
label_4b4024:
    // 0x4b4024: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x4b4024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_4b4028:
    // 0x4b4028: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b4028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4b402c:
    // 0x4b402c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4b402cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
label_4b4030:
    // 0x4b4030: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b4030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b4034:
    // 0x4b4034: 0xac530140  sw          $s3, 0x140($v0)
    ctx->pc = 0x4b4034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 19));
label_4b4038:
    // 0x4b4038: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x4b4038u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_4b403c:
    // 0x4b403c: 0xa6630168  sh          $v1, 0x168($s3)
    ctx->pc = 0x4b403cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 360), (uint16_t)GPR_U32(ctx, 3));
label_4b4040:
    // 0x4b4040: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b4040u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4b4044:
    // 0x4b4044: 0xa662016a  sh          $v0, 0x16A($s3)
    ctx->pc = 0x4b4044u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 362), (uint16_t)GPR_U32(ctx, 2));
label_4b4048:
    // 0x4b4048: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x4b4048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_4b404c:
    // 0x4b404c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x4b404cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b4050:
    // 0x4b4050: 0xc12b642  jal         func_4AD908
label_4b4054:
    if (ctx->pc == 0x4B4054u) {
        ctx->pc = 0x4B4054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4050u;
        // 0x4b4054: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B4058u;
        goto label_4b4058;
    }
    ctx->pc = 0x4B4050u;
    SET_GPR_U32(ctx, 31, 0x4B4058u);
    ctx->pc = 0x4B4054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4050u;
    // 0x4b4054: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4B4050u, 0x4B4058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4058u;
label_4b4058:
    // 0x4b4058: 0xa672000e  sh          $s2, 0xE($s3)
    ctx->pc = 0x4b4058u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 14), (uint16_t)GPR_U32(ctx, 18));
label_4b405c:
    // 0x4b405c: 0x266301b4  addiu       $v1, $s3, 0x1B4
    ctx->pc = 0x4b405cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
label_4b4060:
    // 0x4b4060: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b4060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4b4064:
    // 0x4b4064: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b4064u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4b4068:
    // 0x4b4068: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b4068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4b406c:
    // 0x4b406c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b406cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4b4070:
    // 0x4b4070: 0xac800d30  sw          $zero, 0xD30($a0)
    ctx->pc = 0x4b4070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3376), GPR_U32(ctx, 0));
label_4b4074:
    // 0x4b4074: 0xa6600166  sh          $zero, 0x166($s3)
    ctx->pc = 0x4b4074u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 358), (uint16_t)GPR_U32(ctx, 0));
label_4b4078:
    // 0x4b4078: 0xa6600118  sh          $zero, 0x118($s3)
    ctx->pc = 0x4b4078u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 280), (uint16_t)GPR_U32(ctx, 0));
label_4b407c:
    // 0x4b407c: 0xa660011c  sh          $zero, 0x11C($s3)
    ctx->pc = 0x4b407cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 284), (uint16_t)GPR_U32(ctx, 0));
label_4b4080:
    // 0x4b4080: 0xa6600120  sh          $zero, 0x120($s3)
    ctx->pc = 0x4b4080u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 288), (uint16_t)GPR_U32(ctx, 0));
label_4b4084:
    // 0x4b4084: 0xa660013a  sh          $zero, 0x13A($s3)
    ctx->pc = 0x4b4084u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 314), (uint16_t)GPR_U32(ctx, 0));
label_4b4088:
    // 0x4b4088: 0xa660015e  sh          $zero, 0x15E($s3)
    ctx->pc = 0x4b4088u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 350), (uint16_t)GPR_U32(ctx, 0));
label_4b408c:
    // 0x4b408c: 0xa6600160  sh          $zero, 0x160($s3)
    ctx->pc = 0x4b408cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 352), (uint16_t)GPR_U32(ctx, 0));
label_4b4090:
    // 0x4b4090: 0xa6600162  sh          $zero, 0x162($s3)
    ctx->pc = 0x4b4090u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 354), (uint16_t)GPR_U32(ctx, 0));
label_4b4094:
    // 0x4b4094: 0xa6600164  sh          $zero, 0x164($s3)
    ctx->pc = 0x4b4094u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 356), (uint16_t)GPR_U32(ctx, 0));
label_4b4098:
    // 0x4b4098: 0xa6600130  sh          $zero, 0x130($s3)
    ctx->pc = 0x4b4098u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 304), (uint16_t)GPR_U32(ctx, 0));
label_4b409c:
    // 0x4b409c: 0xa6600132  sh          $zero, 0x132($s3)
    ctx->pc = 0x4b409cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 306), (uint16_t)GPR_U32(ctx, 0));
label_4b40a0:
    // 0x4b40a0: 0xa6600134  sh          $zero, 0x134($s3)
    ctx->pc = 0x4b40a0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 308), (uint16_t)GPR_U32(ctx, 0));
label_4b40a4:
    // 0x4b40a4: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x4b40a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b40a8:
    // 0x4b40a8: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b40a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4b40ac:
    // 0x4b40ac: 0x96620168  lhu         $v0, 0x168($s3)
    ctx->pc = 0x4b40acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 360)));
label_4b40b0:
    // 0x4b40b0: 0x24840d58  addiu       $a0, $a0, 0xD58
    ctx->pc = 0x4b40b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3416));
label_4b40b4:
    // 0x4b40b4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4b40b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4b40b8:
    // 0x4b40b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b40b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b40bc:
    // 0x4b40bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b40bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4b40c0:
    // 0x4b40c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b40c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4b40c4:
    // 0x4b40c4: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4b40c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4b40c8:
    // 0x4b40c8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4b40c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_4b40cc:
    // 0x4b40cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b40ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4b40d0:
    // 0x4b40d0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b40d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4b40d4:
    // 0x4b40d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b40d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4b40d8:
    // 0x4b40d8: 0x8662016a  lh          $v0, 0x16A($s3)
    ctx->pc = 0x4b40d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 362)));
label_4b40dc:
    // 0x4b40dc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4b40dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4b40e0:
    // 0x4b40e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b40e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4b40e4:
    // 0x4b40e4: 0xacc30d60  sw          $v1, 0xD60($a2)
    ctx->pc = 0x4b40e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3424), GPR_U32(ctx, 3));
label_4b40e8:
    // 0x4b40e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b40e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4b40ec:
    // 0x4b40ec: 0x966201bc  lhu         $v0, 0x1BC($s3)
    ctx->pc = 0x4b40ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 444)));
label_4b40f0:
    // 0x4b40f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b40f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4b40f4:
    // 0x4b40f4: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4b40f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4b40f8:
    // 0x4b40f8: 0x2c430006  sltiu       $v1, $v0, 0x6
    ctx->pc = 0x4b40f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_4b40fc:
    // 0x4b40fc: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
label_4b4100:
    if (ctx->pc == 0x4B4100u) {
        ctx->pc = 0x4B4100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B40FCu;
        // 0x4b4100: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B4104u;
        goto label_4b4104;
    }
    ctx->pc = 0x4B40FCu;
    {
        const bool branch_taken_0x4b40fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B40FCu;
        // 0x4b4100: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b40fc) {
            ctx->pc = 0x4B41E0u;
            return;
        }
    }
    ctx->pc = 0x4B4104u;
label_4b4104:
    // 0x4b4104: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b4104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4b4108:
    // 0x4b4108: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4b4108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4b410c:
    // 0x4b410c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b410cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b4110:
    // 0x4b4110: 0x8c63b300  lw          $v1, -0x4D00($v1)
    ctx->pc = 0x4b4110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947584)));
label_4b4114:
    // 0x4b4114: 0x600008  jr          $v1
label_4b4118:
    if (ctx->pc == 0x4B4118u) {
        ctx->pc = 0x4B411Cu;
        goto label_4b411c;
    }
    ctx->pc = 0x4B4114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4114u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4B411Cu;
label_4b411c:
    // 0x4b411c: 0x0  nop
    ctx->pc = 0x4b411cu;
    // NOP
    ctx->pc = 0x4b4120u;
}
