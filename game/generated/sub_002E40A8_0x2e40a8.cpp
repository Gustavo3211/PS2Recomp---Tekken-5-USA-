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

// Function: sub_002E40A8
// Address: 0x2e40a8 - 0x2e4328
void sub_002E40A8_0x2e40a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E40A8_0x2e40a8");
#endif

    switch (ctx->pc) {
        case 0x2e40fcu: goto label_2e40fc;
        case 0x2e4108u: goto label_2e4108;
        case 0x2e411cu: goto label_2e411c;
        case 0x2e4130u: goto label_2e4130;
        case 0x2e4144u: goto label_2e4144;
        case 0x2e4158u: goto label_2e4158;
        case 0x2e4168u: goto label_2e4168;
        case 0x2e4178u: goto label_2e4178;
        case 0x2e41c8u: goto label_2e41c8;
        case 0x2e41d8u: goto label_2e41d8;
        case 0x2e41e8u: goto label_2e41e8;
        case 0x2e41f8u: goto label_2e41f8;
        case 0x2e4208u: goto label_2e4208;
        case 0x2e4218u: goto label_2e4218;
        case 0x2e4268u: goto label_2e4268;
        case 0x2e4294u: goto label_2e4294;
        default: break;
    }

    ctx->pc = 0x2e40a8u;

    // 0x2e40a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e40a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e40ac: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2e40acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2e40b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e40b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e40b4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2e40b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2e40b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e40b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e40bc: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x2e40bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x2e40c0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2e40c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e40c4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2e40c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2e40c8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2e40c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2e40cc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2e40ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2e40d0: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2e40d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x2e40d4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2e40d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2e40d8: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x2e40d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x2e40dc: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2e40dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x2e40e0: 0x8ee20054  lw          $v0, 0x54($s7)
    ctx->pc = 0x2e40e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 84)));
    // 0x2e40e4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2e40e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2e40e8: 0x8ee20058  lw          $v0, 0x58($s7)
    ctx->pc = 0x2e40e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 88)));
    // 0x2e40ec: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2e40ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2e40f0: 0x8ee2005c  lw          $v0, 0x5C($s7)
    ctx->pc = 0x2e40f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 92)));
    // 0x2e40f4: 0xc08eb0a  jal         func_23AC28
    ctx->pc = 0x2E40F4u;
    SET_GPR_U32(ctx, 31, 0x2E40FCu);
    ctx->pc = 0x2E40F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E40F4u;
    // 0x2e40f8: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AC28u, 0x2E40F4u, 0x2E40FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E40FCu;
label_2e40fc:
    // 0x2e40fc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2e40fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2e4100: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2e4100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4104: 0x0  nop
    ctx->pc = 0x2e4104u;
    // NOP
label_2e4108:
    // 0x2e4108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e410c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2e410cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2e4110: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2e4110u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4114: 0xc097d16  jal         func_25F458
    ctx->pc = 0x2E4114u;
    SET_GPR_U32(ctx, 31, 0x2E411Cu);
    ctx->pc = 0x2E4118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4114u;
    // 0x2e4118: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F458u, 0x2E4114u, 0x2E411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E411Cu;
label_2e411c:
    // 0x2e411c: 0x58400021  blezl       $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2E411Cu;
    {
        const bool branch_taken_0x2e411c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e411c) {
            ctx->pc = 0x2E4120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E411Cu;
            // 0x2e4120: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E41A4u;
            goto label_2e41a4;
        }
    }
    ctx->pc = 0x2E4124u;
    // 0x2e4124: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x2e4124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e4128: 0xc097d16  jal         func_25F458
    ctx->pc = 0x2E4128u;
    SET_GPR_U32(ctx, 31, 0x2E4130u);
    ctx->pc = 0x2E412Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4128u;
    // 0x2e412c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F458u, 0x2E4128u, 0x2E4130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4130u;
label_2e4130:
    // 0x2e4130: 0x5840001c  blezl       $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E4130u;
    {
        const bool branch_taken_0x2e4130 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e4130) {
            ctx->pc = 0x2E4134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4130u;
            // 0x2e4134: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E41A4u;
            goto label_2e41a4;
        }
    }
    ctx->pc = 0x2E4138u;
    // 0x2e4138: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2e4138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e413c: 0xc097d16  jal         func_25F458
    ctx->pc = 0x2E413Cu;
    SET_GPR_U32(ctx, 31, 0x2E4144u);
    ctx->pc = 0x2E4140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E413Cu;
    // 0x2e4140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F458u, 0x2E413Cu, 0x2E4144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4144u;
label_2e4144:
    // 0x2e4144: 0x58400017  blezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E4144u;
    {
        const bool branch_taken_0x2e4144 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e4144) {
            ctx->pc = 0x2E4148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4144u;
            // 0x2e4148: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E41A4u;
            goto label_2e41a4;
        }
    }
    ctx->pc = 0x2E414Cu;
    // 0x2e414c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2e414cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4150: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x2E4150u;
    SET_GPR_U32(ctx, 31, 0x2E4158u);
    ctx->pc = 0x2E4154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4150u;
    // 0x2e4154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x2E4150u, 0x2E4158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4158u;
label_2e4158:
    // 0x2e4158: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e415c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x2e415cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e4160: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x2E4160u;
    SET_GPR_U32(ctx, 31, 0x2E4168u);
    ctx->pc = 0x2E4164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4160u;
    // 0x2e4164: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x2E4160u, 0x2E4168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4168u;
label_2e4168:
    // 0x2e4168: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e416c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2e416cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e4170: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x2E4170u;
    SET_GPR_U32(ctx, 31, 0x2E4178u);
    ctx->pc = 0x2E4174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4170u;
    // 0x2e4174: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x2E4170u, 0x2E4178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4178u;
label_2e4178:
    // 0x2e4178: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4178u;
    {
        const bool branch_taken_0x2e4178 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4178u;
        // 0x2e417c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4178) {
            ctx->pc = 0x2E4194u;
            goto label_2e4194;
        }
    }
    ctx->pc = 0x2E4180u;
    // 0x2e4180: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2e4180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2e4184: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4184u;
    {
        const bool branch_taken_0x2e4184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4184u;
        // 0x2e4188: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4184) {
            ctx->pc = 0x2E4194u;
            goto label_2e4194;
        }
    }
    ctx->pc = 0x2E418Cu;
    // 0x2e418c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E418Cu;
    {
        const bool branch_taken_0x2e418c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E418Cu;
        // 0x2e4190: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e418c) {
            ctx->pc = 0x2E41A4u;
            goto label_2e41a4;
        }
    }
    ctx->pc = 0x2E4194u;
label_2e4194:
    // 0x2e4194: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2e4194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2e4198: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2e4198u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e419c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2e419cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2e41a0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2e41a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2e41a4:
    // 0x2e41a4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E41A4u;
    {
        const bool branch_taken_0x2e41a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E41A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E41A4u;
        // 0x2e41a8: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e41a4) {
            ctx->pc = 0x2E4238u;
            goto label_2e4238;
        }
    }
    ctx->pc = 0x2E41ACu;
    // 0x2e41ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e41acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e41b0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2e41b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e41b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e41b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e41b8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2e41b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e41bc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2e41bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e41c0: 0xc097d16  jal         func_25F458
    ctx->pc = 0x2E41C0u;
    SET_GPR_U32(ctx, 31, 0x2E41C8u);
    ctx->pc = 0x2E41C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E41C0u;
    // 0x2e41c4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F458u, 0x2E41C0u, 0x2E41C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E41C8u;
label_2e41c8:
    // 0x2e41c8: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E41C8u;
    {
        const bool branch_taken_0x2e41c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E41CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E41C8u;
        // 0x2e41cc: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e41c8) {
            ctx->pc = 0x2E4244u;
            goto label_2e4244;
        }
    }
    ctx->pc = 0x2E41D0u;
    // 0x2e41d0: 0xc097d16  jal         func_25F458
    ctx->pc = 0x2E41D0u;
    SET_GPR_U32(ctx, 31, 0x2E41D8u);
    ctx->pc = 0x2E41D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E41D0u;
    // 0x2e41d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F458u, 0x2E41D0u, 0x2E41D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E41D8u;
label_2e41d8:
    // 0x2e41d8: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E41D8u;
    {
        const bool branch_taken_0x2e41d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E41D8u;
        // 0x2e41dc: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e41d8) {
            ctx->pc = 0x2E4244u;
            goto label_2e4244;
        }
    }
    ctx->pc = 0x2E41E0u;
    // 0x2e41e0: 0xc097d16  jal         func_25F458
    ctx->pc = 0x2E41E0u;
    SET_GPR_U32(ctx, 31, 0x2E41E8u);
    ctx->pc = 0x2E41E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E41E0u;
    // 0x2e41e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F458u, 0x2E41E0u, 0x2E41E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E41E8u;
label_2e41e8:
    // 0x2e41e8: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E41E8u;
    {
        const bool branch_taken_0x2e41e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E41ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E41E8u;
        // 0x2e41ec: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e41e8) {
            ctx->pc = 0x2E4244u;
            goto label_2e4244;
        }
    }
    ctx->pc = 0x2E41F0u;
    // 0x2e41f0: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x2E41F0u;
    SET_GPR_U32(ctx, 31, 0x2E41F8u);
    ctx->pc = 0x2E41F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E41F0u;
    // 0x2e41f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x2E41F0u, 0x2E41F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E41F8u;
label_2e41f8:
    // 0x2e41f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e41f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e41fc: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x2e41fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e4200: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x2E4200u;
    SET_GPR_U32(ctx, 31, 0x2E4208u);
    ctx->pc = 0x2E4204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4200u;
    // 0x2e4204: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x2E4200u, 0x2E4208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4208u;
label_2e4208:
    // 0x2e4208: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e420c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2e420cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e4210: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x2E4210u;
    SET_GPR_U32(ctx, 31, 0x2E4218u);
    ctx->pc = 0x2E4214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4210u;
    // 0x2e4214: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x2E4210u, 0x2E4218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4218u;
label_2e4218:
    // 0x2e4218: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E4218u;
    {
        const bool branch_taken_0x2e4218 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4218u;
        // 0x2e421c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4218) {
            ctx->pc = 0x2E4238u;
            goto label_2e4238;
        }
    }
    ctx->pc = 0x2E4220u;
    // 0x2e4220: 0x52a00006  beql        $s5, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4220u;
    {
        const bool branch_taken_0x2e4220 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4220) {
            ctx->pc = 0x2E4224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4220u;
            // 0x2e4224: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E423Cu;
            goto label_2e423c;
        }
    }
    ctx->pc = 0x2E4228u;
    // 0x2e4228: 0x16c00006  bnez        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4228u;
    {
        const bool branch_taken_0x2e4228 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4228) {
            ctx->pc = 0x2E4244u;
            goto label_2e4244;
        }
    }
    ctx->pc = 0x2E4230u;
    // 0x2e4230: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E4230u;
    {
        const bool branch_taken_0x2e4230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4230u;
        // 0x2e4234: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4230) {
            ctx->pc = 0x2E423Cu;
            goto label_2e423c;
        }
    }
    ctx->pc = 0x2E4238u;
label_2e4238:
    // 0x2e4238: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2e4238u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e423c:
    // 0x2e423c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2e423cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4240: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e4240u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4244:
    // 0x2e4244: 0x17c00003  bnez        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4244u;
    {
        const bool branch_taken_0x2e4244 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4244u;
        // 0x2e4248: 0x1410c0  sll         $v0, $s4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4244) {
            ctx->pc = 0x2E4254u;
            goto label_2e4254;
        }
    }
    ctx->pc = 0x2E424Cu;
    // 0x2e424c: 0x52600025  beql        $s3, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x2E424Cu;
    {
        const bool branch_taken_0x2e424c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e424c) {
            ctx->pc = 0x2E4250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E424Cu;
            // 0x2e4250: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E42E4u;
            goto label_2e42e4;
        }
    }
    ctx->pc = 0x2E4254u;
label_2e4254:
    // 0x2e4254: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2e4254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4258: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2e4258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2e425c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e425cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4260: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E4260u;
    SET_GPR_U32(ctx, 31, 0x2E4268u);
    ctx->pc = 0x2E4264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4260u;
    // 0x2e4264: 0x24510060  addiu       $s1, $v0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E4260u, 0x2E4268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4268u;
label_2e4268:
    // 0x2e4268: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e4268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e426c: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x2e426cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2e4270: 0x8ee60050  lw          $a2, 0x50($s7)
    ctx->pc = 0x2e4270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 80)));
    // 0x2e4274: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e4274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4278: 0x8fa90020  lw          $t1, 0x20($sp)
    ctx->pc = 0x2e4278u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e427c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2e427cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4280: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2e4280u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4284: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x2e4284u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e428c: 0xc0b9128  jal         func_2E44A0
    ctx->pc = 0x2E428Cu;
    SET_GPR_U32(ctx, 31, 0x2E4294u);
    ctx->pc = 0x2E4290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E428Cu;
    // 0x2e4290: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E44A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E44A0u, 0x2E428Cu, 0x2E4294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4294u;
label_2e4294:
    // 0x2e4294: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2e4294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2e4298: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2e4298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e429c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2e429cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2e42a0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2e42a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2e42a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E42A4u;
    {
        const bool branch_taken_0x2e42a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E42A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42A4u;
        // 0x2e42a8: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42a4) {
            ctx->pc = 0x2E42DCu;
            goto label_2e42dc;
        }
    }
    ctx->pc = 0x2E42ACu;
    // 0x2e42ac: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2e42acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2e42b0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E42B0u;
    {
        const bool branch_taken_0x2e42b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E42B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42B0u;
        // 0x2e42b4: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42b0) {
            ctx->pc = 0x2E42C4u;
            goto label_2e42c4;
        }
    }
    ctx->pc = 0x2E42B8u;
    // 0x2e42b8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e42b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e42bc: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E42BCu;
    {
        const bool branch_taken_0x2e42bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E42C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42BCu;
        // 0x2e42c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42bc) {
            ctx->pc = 0x2E42D0u;
            goto label_2e42d0;
        }
    }
    ctx->pc = 0x2E42C4u;
label_2e42c4:
    // 0x2e42c4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e42c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2e42c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e42c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e42cc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e42ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e42d0:
    // 0x2e42d0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x2e42d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x2e42d4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2e42d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e42d8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2e42d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_2e42dc:
    // 0x2e42dc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2e42dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e42e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e42e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2e42e4:
    // 0x2e42e4: 0x2a420020  slti        $v0, $s2, 0x20
    ctx->pc = 0x2e42e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2e42e8: 0x1440ff87  bnez        $v0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x2E42E8u;
    {
        const bool branch_taken_0x2e42e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E42ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42E8u;
        // 0x2e42ec: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42e8) {
            ctx->pc = 0x2E4108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4108;
        }
    }
    ctx->pc = 0x2E42F0u;
    // 0x2e42f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e42f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e42f4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2e42f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e42f8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2e42f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e42fc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2e42fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4300: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2e4300u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e4304: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2e4304u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e4308: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2e4308u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e430c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2e430cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e4310: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x2e4310u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2e4314: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x2e4314u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e4318: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2e4318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e431c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E431Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E431Cu;
        // 0x2e4320: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E431Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4324u;
    // 0x2e4324: 0x0  nop
    ctx->pc = 0x2e4324u;
    // NOP
    ctx->pc = 0x2e4328u;
}
