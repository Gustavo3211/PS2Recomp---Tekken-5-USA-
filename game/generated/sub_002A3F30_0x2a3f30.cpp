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

// Function: sub_002A3F30
// Address: 0x2a3f30 - 0x2a43a0
void sub_002A3F30_0x2a3f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3F30_0x2a3f30");
#endif

    switch (ctx->pc) {
        case 0x2a3fc0u: goto label_2a3fc0;
        case 0x2a3fd0u: goto label_2a3fd0;
        case 0x2a3fdcu: goto label_2a3fdc;
        case 0x2a3ffcu: goto label_2a3ffc;
        case 0x2a4010u: goto label_2a4010;
        case 0x2a4034u: goto label_2a4034;
        case 0x2a4048u: goto label_2a4048;
        case 0x2a405cu: goto label_2a405c;
        case 0x2a4068u: goto label_2a4068;
        case 0x2a4090u: goto label_2a4090;
        case 0x2a40a4u: goto label_2a40a4;
        case 0x2a40b8u: goto label_2a40b8;
        case 0x2a40ccu: goto label_2a40cc;
        case 0x2a40e0u: goto label_2a40e0;
        case 0x2a40f4u: goto label_2a40f4;
        case 0x2a4138u: goto label_2a4138;
        case 0x2a4158u: goto label_2a4158;
        case 0x2a4178u: goto label_2a4178;
        case 0x2a4188u: goto label_2a4188;
        case 0x2a4198u: goto label_2a4198;
        case 0x2a41b0u: goto label_2a41b0;
        case 0x2a41b8u: goto label_2a41b8;
        case 0x2a41c8u: goto label_2a41c8;
        case 0x2a41d4u: goto label_2a41d4;
        case 0x2a41e8u: goto label_2a41e8;
        case 0x2a41f8u: goto label_2a41f8;
        case 0x2a4218u: goto label_2a4218;
        case 0x2a4220u: goto label_2a4220;
        case 0x2a4240u: goto label_2a4240;
        case 0x2a4254u: goto label_2a4254;
        case 0x2a4274u: goto label_2a4274;
        case 0x2a4288u: goto label_2a4288;
        case 0x2a4294u: goto label_2a4294;
        case 0x2a42a8u: goto label_2a42a8;
        case 0x2a42d0u: goto label_2a42d0;
        case 0x2a42e4u: goto label_2a42e4;
        case 0x2a42f8u: goto label_2a42f8;
        case 0x2a431cu: goto label_2a431c;
        case 0x2a4330u: goto label_2a4330;
        case 0x2a4340u: goto label_2a4340;
        case 0x2a4350u: goto label_2a4350;
        default: break;
    }

    ctx->pc = 0x2a3f30u;

    // 0x2a3f30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a3f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a3f34: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2a3f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2a3f38: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x2a3f38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x2a3f3c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2a3f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2a3f40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a3f40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f44: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2a3f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x2a3f48: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2a3f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a3f4c: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x2a3f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x2a3f50: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2a3f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2a3f54: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a3f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a3f58: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2a3f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2a3f5c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2a3f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2a3f60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a3f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a3f64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3F64u;
    {
        const bool branch_taken_0x2a3f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3F64u;
        // 0x2a3f68: 0x261683c0  addiu       $s6, $s0, -0x7C40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3f64) {
            ctx->pc = 0x2A3F80u;
            goto label_2a3f80;
        }
    }
    ctx->pc = 0x2A3F6Cu;
    // 0x2a3f6c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a3f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a3f70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a3f70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f74: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a3f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a3f78: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3F78u;
    {
        const bool branch_taken_0x2a3f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a3f78) {
            ctx->pc = 0x2A3F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3F78u;
            // 0x2a3f7c: 0x8e230048  lw          $v1, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3F90u;
            goto label_2a3f90;
        }
    }
    ctx->pc = 0x2A3F80u;
label_2a3f80:
    // 0x2a3f80: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a3f80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a3f84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a3f84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f88: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a3f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a3f8c: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2a3f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2a3f90:
    // 0x2a3f90: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2a3f90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2a3f94: 0x504000f1  beql        $v0, $zero, . + 4 + (0xF1 << 2)
    ctx->pc = 0x2A3F94u;
    {
        const bool branch_taken_0x2a3f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3f94) {
            ctx->pc = 0x2A3F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3F94u;
            // 0x2a3f98: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A435Cu;
            goto label_2a435c;
        }
    }
    ctx->pc = 0x2A3F9Cu;
    // 0x2a3f9c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2a3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a3fa0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2a3fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2a3fa4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a3fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a3fa8: 0x8c63d4e0  lw          $v1, -0x2B20($v1)
    ctx->pc = 0x2a3fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956256)));
    // 0x2a3fac: 0x600008  jr          $v1
    ctx->pc = 0x2A3FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A3FB8u: goto label_2a3fb8;
            case 0x2A4008u: goto label_2a4008;
            case 0x2A41A8u: goto label_2a41a8;
            case 0x2A4210u: goto label_2a4210;
            case 0x2A4338u: goto label_2a4338;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3FACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A3FB4u;
    // 0x2a3fb4: 0x0  nop
    ctx->pc = 0x2a3fb4u;
    // NOP
label_2a3fb8:
    // 0x2a3fb8: 0xc089622  jal         func_225888
    ctx->pc = 0x2A3FB8u;
    SET_GPR_U32(ctx, 31, 0x2A3FC0u);
    ctx->pc = 0x2A3FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3FB8u;
    // 0x2a3fbc: 0x2404003e  addiu       $a0, $zero, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x2A3FB8u, 0x2A3FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3FC0u;
label_2a3fc0:
    // 0x2a3fc0: 0x504000ec  beql        $v0, $zero, . + 4 + (0xEC << 2)
    ctx->pc = 0x2A3FC0u;
    {
        const bool branch_taken_0x2a3fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3fc0) {
            ctx->pc = 0x2A3FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3FC0u;
            // 0x2a3fc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4374u;
            goto label_2a4374;
        }
    }
    ctx->pc = 0x2A3FC8u;
    // 0x2a3fc8: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2A3FC8u;
    SET_GPR_U32(ctx, 31, 0x2A3FD0u);
    ctx->pc = 0x2A3FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3FC8u;
    // 0x2a3fcc: 0x2404002a  addiu       $a0, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2A3FC8u, 0x2A3FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3FD0u;
label_2a3fd0:
    // 0x2a3fd0: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x2a3fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2a3fd4: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2A3FD4u;
    SET_GPR_U32(ctx, 31, 0x2A3FDCu);
    ctx->pc = 0x2A3FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3FD4u;
    // 0x2a3fd8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2A3FD4u, 0x2A3FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3FDCu;
label_2a3fdc:
    // 0x2a3fdc: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x2a3fdcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x2a3fe0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a3fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3fe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3fe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a3fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3fec: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2a3fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2a3ff0: 0x240800f4  addiu       $t0, $zero, 0xF4
    ctx->pc = 0x2a3ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x2a3ff4: 0xc0a5adc  jal         func_296B70
    ctx->pc = 0x2A3FF4u;
    SET_GPR_U32(ctx, 31, 0x2A3FFCu);
    ctx->pc = 0x2A3FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3FF4u;
    // 0x2a3ff8: 0x35291000  ori         $t1, $t1, 0x1000 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4096);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B70u, 0x2A3FF4u, 0x2A3FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3FFCu;
label_2a3ffc:
    // 0x2a3ffc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a3ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4000: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x2A4000u;
    {
        const bool branch_taken_0x2a4000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4000u;
        // 0x2a4004: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4000) {
            ctx->pc = 0x2A4370u;
            goto label_2a4370;
        }
    }
    ctx->pc = 0x2A4008u;
label_2a4008:
    // 0x2a4008: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x2A4008u;
    SET_GPR_U32(ctx, 31, 0x2A4010u);
    ctx->pc = 0x2A400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4008u;
    // 0x2a400c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x2A4008u, 0x2A4010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4010u;
label_2a4010:
    // 0x2a4010: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x2a4010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x2a4014: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x2A4014u;
    {
        const bool branch_taken_0x2a4014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4014u;
        // 0x2a4018: 0x2403fffd  addiu       $v1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4014) {
            ctx->pc = 0x2A4370u;
            goto label_2a4370;
        }
    }
    ctx->pc = 0x2A401Cu;
    // 0x2a401c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2a401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2a4020: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2a4020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2a4024: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a4024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a4028: 0x2484c668  addiu       $a0, $a0, -0x3998
    ctx->pc = 0x2a4028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952552));
    // 0x2a402c: 0xc0a79ea  jal         func_29E7A8
    ctx->pc = 0x2A402Cu;
    SET_GPR_U32(ctx, 31, 0x2A4034u);
    ctx->pc = 0x2A4030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A402Cu;
    // 0x2a4030: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E7A8u, 0x2A402Cu, 0x2A4034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4034u;
label_2a4034:
    // 0x2a4034: 0x104000ce  beqz        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x2A4034u;
    {
        const bool branch_taken_0x2a4034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4034u;
        // 0x2a4038: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4034) {
            ctx->pc = 0x2A4370u;
            goto label_2a4370;
        }
    }
    ctx->pc = 0x2A403Cu;
    // 0x2a403c: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x2a403cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x2a4040: 0x26740008  addiu       $s4, $s3, 0x8
    ctx->pc = 0x2a4040u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2a4044: 0x0  nop
    ctx->pc = 0x2a4044u;
    // NOP
label_2a4048:
    // 0x2a4048: 0x26500001  addiu       $s0, $s2, 0x1
    ctx->pc = 0x2a4048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a404c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a404cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4050: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a4050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4054: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2A4054u;
    SET_GPR_U32(ctx, 31, 0x2A405Cu);
    ctx->pc = 0x2A4058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4054u;
    // 0x2a4058: 0x26a5d408  addiu       $a1, $s5, -0x2BF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2A4054u, 0x2A405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A405Cu;
label_2a405c:
    // 0x2a405c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a405cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4060: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A4060u;
    SET_GPR_U32(ctx, 31, 0x2A4068u);
    ctx->pc = 0x2A4064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4060u;
    // 0x2a4064: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A4060u, 0x2A4068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4068u;
label_2a4068:
    // 0x2a4068: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2a4068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2a406c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2a406cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4070: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2a4070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2a4074: 0x2a440006  slti        $a0, $s2, 0x6
    ctx->pc = 0x2a4074u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a4078: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2A4078u;
    {
        const bool branch_taken_0x2a4078 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4078u;
        // 0x2a407c: 0xac620060  sw          $v0, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4078) {
            ctx->pc = 0x2A4048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4048;
        }
    }
    ctx->pc = 0x2A4080u;
    // 0x2a4080: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a4080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a4084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4088: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A4088u;
    SET_GPR_U32(ctx, 31, 0x2A4090u);
    ctx->pc = 0x2A408Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4088u;
    // 0x2a408c: 0x24a5d420  addiu       $a1, $a1, -0x2BE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A4088u, 0x2A4090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4090u;
label_2a4090:
    // 0x2a4090: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a4090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a4094: 0xae620050  sw          $v0, 0x50($s3)
    ctx->pc = 0x2a4094u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
    // 0x2a4098: 0x24a5d438  addiu       $a1, $a1, -0x2BC8
    ctx->pc = 0x2a4098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956088));
    // 0x2a409c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A409Cu;
    SET_GPR_U32(ctx, 31, 0x2A40A4u);
    ctx->pc = 0x2A40A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A409Cu;
    // 0x2a40a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A409Cu, 0x2A40A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A40A4u;
label_2a40a4:
    // 0x2a40a4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a40a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a40a8: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x2a40a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x2a40ac: 0x24a5d450  addiu       $a1, $a1, -0x2BB0
    ctx->pc = 0x2a40acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956112));
    // 0x2a40b0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A40B0u;
    SET_GPR_U32(ctx, 31, 0x2A40B8u);
    ctx->pc = 0x2A40B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A40B0u;
    // 0x2a40b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A40B0u, 0x2A40B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A40B8u;
label_2a40b8:
    // 0x2a40b8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a40b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a40bc: 0xae620058  sw          $v0, 0x58($s3)
    ctx->pc = 0x2a40bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
    // 0x2a40c0: 0x24a5d468  addiu       $a1, $a1, -0x2B98
    ctx->pc = 0x2a40c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956136));
    // 0x2a40c4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A40C4u;
    SET_GPR_U32(ctx, 31, 0x2A40CCu);
    ctx->pc = 0x2A40C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A40C4u;
    // 0x2a40c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A40C4u, 0x2A40CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A40CCu;
label_2a40cc:
    // 0x2a40cc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a40ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a40d0: 0xae62005c  sw          $v0, 0x5C($s3)
    ctx->pc = 0x2a40d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 2));
    // 0x2a40d4: 0x24a5d480  addiu       $a1, $a1, -0x2B80
    ctx->pc = 0x2a40d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956160));
    // 0x2a40d8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A40D8u;
    SET_GPR_U32(ctx, 31, 0x2A40E0u);
    ctx->pc = 0x2A40DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A40D8u;
    // 0x2a40dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A40D8u, 0x2A40E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A40E0u;
label_2a40e0:
    // 0x2a40e0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a40e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a40e4: 0xae620060  sw          $v0, 0x60($s3)
    ctx->pc = 0x2a40e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
    // 0x2a40e8: 0x24a5d4a0  addiu       $a1, $a1, -0x2B60
    ctx->pc = 0x2a40e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956192));
    // 0x2a40ec: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A40ECu;
    SET_GPR_U32(ctx, 31, 0x2A40F4u);
    ctx->pc = 0x2A40F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A40ECu;
    // 0x2a40f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A40ECu, 0x2A40F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A40F4u;
label_2a40f4:
    // 0x2a40f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a40f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40f8: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x2a40f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2a40fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A40FCu;
    {
        const bool branch_taken_0x2a40fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A40FCu;
        // 0x2a4100: 0xae630064  sw          $v1, 0x64($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a40fc) {
            ctx->pc = 0x2A4124u;
            goto label_2a4124;
        }
    }
    ctx->pc = 0x2A4104u;
    // 0x2a4104: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x2a4104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2a4108: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x2A4108u;
    {
        const bool branch_taken_0x2a4108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4108u;
        // 0x2a410c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4108) {
            ctx->pc = 0x2A4374u;
            goto label_2a4374;
        }
    }
    ctx->pc = 0x2A4110u;
    // 0x2a4110: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x2a4110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x2a4114: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x2A4114u;
    {
        const bool branch_taken_0x2a4114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4114u;
        // 0x2a4118: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4114) {
            ctx->pc = 0x2A4374u;
            goto label_2a4374;
        }
    }
    ctx->pc = 0x2A411Cu;
    // 0x2a411c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A411Cu;
    {
        const bool branch_taken_0x2a411c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a411c) {
            ctx->pc = 0x2A4130u;
            goto label_2a4130;
        }
    }
    ctx->pc = 0x2A4124u;
label_2a4124:
    // 0x2a4124: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x2A4124u;
    {
        const bool branch_taken_0x2a4124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4124u;
        // 0x2a4128: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4124) {
            ctx->pc = 0x2A4374u;
            goto label_2a4374;
        }
    }
    ctx->pc = 0x2A412Cu;
    // 0x2a412c: 0x0  nop
    ctx->pc = 0x2a412cu;
    // NOP
label_2a4130:
    // 0x2a4130: 0xc0a90e8  jal         func_2A43A0
    ctx->pc = 0x2A4130u;
    SET_GPR_U32(ctx, 31, 0x2A4138u);
    ctx->pc = 0x2A4134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4130u;
    // 0x2a4134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A43A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A43A0u, 0x2A4130u, 0x2A4138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4138u;
label_2a4138:
    // 0x2a4138: 0x92c3002b  lbu         $v1, 0x2B($s6)
    ctx->pc = 0x2a4138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 43)));
    // 0x2a413c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a413cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4140: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A4140u;
    {
        const bool branch_taken_0x2a4140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a4140) {
            ctx->pc = 0x2A4144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4140u;
            // 0x2a4144: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4160u;
            goto label_2a4160;
        }
    }
    ctx->pc = 0x2A4148u;
    // 0x2a4148: 0x92c5002d  lbu         $a1, 0x2D($s6)
    ctx->pc = 0x2a4148u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 45)));
    // 0x2a414c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a414cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4150: 0xc0a91a2  jal         func_2A4688
    ctx->pc = 0x2A4150u;
    SET_GPR_U32(ctx, 31, 0x2A4158u);
    ctx->pc = 0x2A4154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4150u;
    // 0x2a4154: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4688u, 0x2A4150u, 0x2A4158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4158u;
label_2a4158:
    // 0x2a4158: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A4158u;
    {
        const bool branch_taken_0x2a4158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4158u;
        // 0x2a415c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4158) {
            ctx->pc = 0x2A418Cu;
            goto label_2a418c;
        }
    }
    ctx->pc = 0x2A4160u;
label_2a4160:
    // 0x2a4160: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A4160u;
    {
        const bool branch_taken_0x2a4160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A4164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4160u;
        // 0x2a4164: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4160) {
            ctx->pc = 0x2A418Cu;
            goto label_2a418c;
        }
    }
    ctx->pc = 0x2A4168u;
    // 0x2a4168: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a4168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a416c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a416cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4170: 0xc0a91a2  jal         func_2A4688
    ctx->pc = 0x2A4170u;
    SET_GPR_U32(ctx, 31, 0x2A4178u);
    ctx->pc = 0x2A4174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4170u;
    // 0x2a4174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4688u, 0x2A4170u, 0x2A4178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4178u;
label_2a4178:
    // 0x2a4178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a417c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a417cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4180: 0xc0a91a2  jal         func_2A4688
    ctx->pc = 0x2A4180u;
    SET_GPR_U32(ctx, 31, 0x2A4188u);
    ctx->pc = 0x2A4184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4180u;
    // 0x2a4184: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4688u, 0x2A4180u, 0x2A4188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4188u;
label_2a4188:
    // 0x2a4188: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a4188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2a418c:
    // 0x2a418c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a418cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4190: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A4190u;
    SET_GPR_U32(ctx, 31, 0x2A4198u);
    ctx->pc = 0x2A4194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4190u;
    // 0x2a4194: 0x24a5d4c0  addiu       $a1, $a1, -0x2B40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A4190u, 0x2A4198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4198u;
label_2a4198:
    // 0x2a4198: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a4198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a419c: 0xae620080  sw          $v0, 0x80($s3)
    ctx->pc = 0x2a419cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    // 0x2a41a0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2A41A0u;
    {
        const bool branch_taken_0x2a41a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A41A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A41A0u;
        // 0x2a41a4: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a41a0) {
            ctx->pc = 0x2A4370u;
            goto label_2a4370;
        }
    }
    ctx->pc = 0x2A41A8u;
label_2a41a8:
    // 0x2a41a8: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x2A41A8u;
    SET_GPR_U32(ctx, 31, 0x2A41B0u);
    ctx->pc = 0x2A41ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A41A8u;
    // 0x2a41ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x2A41A8u, 0x2A41B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A41B0u;
label_2a41b0:
    // 0x2a41b0: 0xc07eb2e  jal         func_1FACB8
    ctx->pc = 0x2A41B0u;
    SET_GPR_U32(ctx, 31, 0x2A41B8u);
    ctx->pc = 0x1FACB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FACB8u, 0x2A41B0u, 0x2A41B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A41B8u;
label_2a41b8:
    // 0x2a41b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A41B8u;
    {
        const bool branch_taken_0x2a41b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a41b8) {
            ctx->pc = 0x2A41E0u;
            goto label_2a41e0;
        }
    }
    ctx->pc = 0x2A41C0u;
    // 0x2a41c0: 0xc07eb2e  jal         func_1FACB8
    ctx->pc = 0x2A41C0u;
    SET_GPR_U32(ctx, 31, 0x2A41C8u);
    ctx->pc = 0x1FACB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FACB8u, 0x2A41C0u, 0x2A41C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A41C8u;
label_2a41c8:
    // 0x2a41c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a41c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a41cc: 0xc0a91ca  jal         func_2A4728
    ctx->pc = 0x2A41CCu;
    SET_GPR_U32(ctx, 31, 0x2A41D4u);
    ctx->pc = 0x2A41D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A41CCu;
    // 0x2a41d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4728u, 0x2A41CCu, 0x2A41D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A41D4u;
label_2a41d4:
    // 0x2a41d4: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2A41D4u;
    {
        const bool branch_taken_0x2a41d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A41D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A41D4u;
        // 0x2a41d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a41d4) {
            ctx->pc = 0x2A4374u;
            goto label_2a4374;
        }
    }
    ctx->pc = 0x2A41DCu;
    // 0x2a41dc: 0x0  nop
    ctx->pc = 0x2a41dcu;
    // NOP
label_2a41e0:
    // 0x2a41e0: 0xc07e28a  jal         func_1F8A28
    ctx->pc = 0x2A41E0u;
    SET_GPR_U32(ctx, 31, 0x2A41E8u);
    ctx->pc = 0x1F8A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A28u, 0x2A41E0u, 0x2A41E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A41E8u;
label_2a41e8:
    // 0x2a41e8: 0x50400062  beql        $v0, $zero, . + 4 + (0x62 << 2)
    ctx->pc = 0x2A41E8u;
    {
        const bool branch_taken_0x2a41e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a41e8) {
            ctx->pc = 0x2A41ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A41E8u;
            // 0x2a41ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4374u;
            goto label_2a4374;
        }
    }
    ctx->pc = 0x2A41F0u;
    // 0x2a41f0: 0xc0a90e8  jal         func_2A43A0
    ctx->pc = 0x2A41F0u;
    SET_GPR_U32(ctx, 31, 0x2A41F8u);
    ctx->pc = 0x2A41F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A41F0u;
    // 0x2a41f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A43A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A43A0u, 0x2A41F0u, 0x2A41F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A41F8u;
label_2a41f8:
    // 0x2a41f8: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2a41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2a41fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a41fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a4200: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2a4200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2a4204: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2A4204u;
    {
        const bool branch_taken_0x2a4204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4204u;
        // 0x2a4208: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4204) {
            ctx->pc = 0x2A436Cu;
            goto label_2a436c;
        }
    }
    ctx->pc = 0x2A420Cu;
    // 0x2a420c: 0x0  nop
    ctx->pc = 0x2a420cu;
    // NOP
label_2a4210:
    // 0x2a4210: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x2A4210u;
    SET_GPR_U32(ctx, 31, 0x2A4218u);
    ctx->pc = 0x2A4214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4210u;
    // 0x2a4214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x2A4210u, 0x2A4218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4218u;
label_2a4218:
    // 0x2a4218: 0xc07e28a  jal         func_1F8A28
    ctx->pc = 0x2A4218u;
    SET_GPR_U32(ctx, 31, 0x2A4220u);
    ctx->pc = 0x1F8A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A28u, 0x2A4218u, 0x2A4220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4220u;
label_2a4220:
    // 0x2a4220: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2A4220u;
    {
        const bool branch_taken_0x2a4220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4220u;
        // 0x2a4224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4220) {
            ctx->pc = 0x2A4358u;
            goto label_2a4358;
        }
    }
    ctx->pc = 0x2A4228u;
    // 0x2a4228: 0x92c3002b  lbu         $v1, 0x2B($s6)
    ctx->pc = 0x2a4228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 43)));
    // 0x2a422c: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A422Cu;
    {
        const bool branch_taken_0x2a422c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a422c) {
            ctx->pc = 0x2A4230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A422Cu;
            // 0x2a4230: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4260u;
            goto label_2a4260;
        }
    }
    ctx->pc = 0x2A4234u;
    // 0x2a4234: 0x92c5002d  lbu         $a1, 0x2D($s6)
    ctx->pc = 0x2a4234u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 45)));
    // 0x2a4238: 0xc0a9186  jal         func_2A4618
    ctx->pc = 0x2A4238u;
    SET_GPR_U32(ctx, 31, 0x2A4240u);
    ctx->pc = 0x2A423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4238u;
    // 0x2a423c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4618u, 0x2A4238u, 0x2A4240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4240u;
label_2a4240:
    // 0x2a4240: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A4240u;
    {
        const bool branch_taken_0x2a4240 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4240u;
        // 0x2a4244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4240) {
            ctx->pc = 0x2A42A8u;
            goto label_2a42a8;
        }
    }
    ctx->pc = 0x2A4248u;
    // 0x2a4248: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a4248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a424c: 0xc0a91a2  jal         func_2A4688
    ctx->pc = 0x2A424Cu;
    SET_GPR_U32(ctx, 31, 0x2A4254u);
    ctx->pc = 0x2A4250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A424Cu;
    // 0x2a4250: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4688u, 0x2A424Cu, 0x2A4254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4254u;
label_2a4254:
    // 0x2a4254: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2A4254u;
    {
        const bool branch_taken_0x2a4254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4254u;
        // 0x2a4258: 0x8e0283c0  lw          $v0, -0x7C40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4254) {
            ctx->pc = 0x2A42ACu;
            goto label_2a42ac;
        }
    }
    ctx->pc = 0x2A425Cu;
    // 0x2a425c: 0x0  nop
    ctx->pc = 0x2a425cu;
    // NOP
label_2a4260:
    // 0x2a4260: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A4260u;
    {
        const bool branch_taken_0x2a4260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a4260) {
            ctx->pc = 0x2A4264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4260u;
            // 0x2a4264: 0x8e0283c0  lw          $v0, -0x7C40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935488)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A42ACu;
            goto label_2a42ac;
        }
    }
    ctx->pc = 0x2A4268u;
    // 0x2a4268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a426c: 0xc0a9186  jal         func_2A4618
    ctx->pc = 0x2A426Cu;
    SET_GPR_U32(ctx, 31, 0x2A4274u);
    ctx->pc = 0x2A4270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A426Cu;
    // 0x2a4270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4618u, 0x2A426Cu, 0x2A4274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4274u;
label_2a4274:
    // 0x2a4274: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4274u;
    {
        const bool branch_taken_0x2a4274 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A4278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4274u;
        // 0x2a4278: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4274) {
            ctx->pc = 0x2A4288u;
            goto label_2a4288;
        }
    }
    ctx->pc = 0x2A427Cu;
    // 0x2a427c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a427cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4280: 0xc0a91a2  jal         func_2A4688
    ctx->pc = 0x2A4280u;
    SET_GPR_U32(ctx, 31, 0x2A4288u);
    ctx->pc = 0x2A4284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4280u;
    // 0x2a4284: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4688u, 0x2A4280u, 0x2A4288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4288u;
label_2a4288:
    // 0x2a4288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a428c: 0xc0a9186  jal         func_2A4618
    ctx->pc = 0x2A428Cu;
    SET_GPR_U32(ctx, 31, 0x2A4294u);
    ctx->pc = 0x2A4290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A428Cu;
    // 0x2a4290: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4618u, 0x2A428Cu, 0x2A4294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4294u;
label_2a4294:
    // 0x2a4294: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4294u;
    {
        const bool branch_taken_0x2a4294 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A4298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4294u;
        // 0x2a4298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4294) {
            ctx->pc = 0x2A42A8u;
            goto label_2a42a8;
        }
    }
    ctx->pc = 0x2A429Cu;
    // 0x2a429c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a429cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a42a0: 0xc0a91a2  jal         func_2A4688
    ctx->pc = 0x2A42A0u;
    SET_GPR_U32(ctx, 31, 0x2A42A8u);
    ctx->pc = 0x2A42A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A42A0u;
    // 0x2a42a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4688u, 0x2A42A0u, 0x2A42A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A42A8u;
label_2a42a8:
    // 0x2a42a8: 0x8e0283c0  lw          $v0, -0x7C40($s0)
    ctx->pc = 0x2a42a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935488)));
label_2a42ac:
    // 0x2a42ac: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2a42acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x2a42b0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A42B0u;
    {
        const bool branch_taken_0x2a42b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A42B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A42B0u;
        // 0x2a42b4: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a42b0) {
            ctx->pc = 0x2A42F0u;
            goto label_2a42f0;
        }
    }
    ctx->pc = 0x2A42B8u;
    // 0x2a42b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a42b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a42bc: 0x2484d238  addiu       $a0, $a0, -0x2DC8
    ctx->pc = 0x2a42bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955576));
    // 0x2a42c0: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a42c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a42c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a42c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a42c8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A42C8u;
    SET_GPR_U32(ctx, 31, 0x2A42D0u);
    ctx->pc = 0x2A42CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A42C8u;
    // 0x2a42cc: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A42C8u, 0x2A42D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A42D0u;
label_2a42d0:
    // 0x2a42d0: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2a42d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2a42d4: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x2a42d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x2a42d8: 0x24844048  addiu       $a0, $a0, 0x4048
    ctx->pc = 0x2a42d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16456));
    // 0x2a42dc: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A42DCu;
    SET_GPR_U32(ctx, 31, 0x2A42E4u);
    ctx->pc = 0x2A42E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A42DCu;
    // 0x2a42e0: 0x34a50103  ori         $a1, $a1, 0x103 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)259);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A42DCu, 0x2A42E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A42E4u;
label_2a42e4:
    // 0x2a42e4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2A42E4u;
    {
        const bool branch_taken_0x2a42e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A42E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A42E4u;
        // 0x2a42e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a42e4) {
            ctx->pc = 0x2A4374u;
            goto label_2a4374;
        }
    }
    ctx->pc = 0x2A42ECu;
    // 0x2a42ec: 0x0  nop
    ctx->pc = 0x2a42ecu;
    // NOP
label_2a42f0:
    // 0x2a42f0: 0xc07ebb6  jal         func_1FAED8
    ctx->pc = 0x2A42F0u;
    SET_GPR_U32(ctx, 31, 0x2A42F8u);
    ctx->pc = 0x1FAED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAED8u, 0x2A42F0u, 0x2A42F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A42F8u;
label_2a42f8:
    // 0x2a42f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a42f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a42fc: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A42FCu;
    {
        const bool branch_taken_0x2a42fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A4300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A42FCu;
        // 0x2a4300: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a42fc) {
            ctx->pc = 0x2A4370u;
            goto label_2a4370;
        }
    }
    ctx->pc = 0x2A4304u;
    // 0x2a4304: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a4304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4308: 0x2484d238  addiu       $a0, $a0, -0x2DC8
    ctx->pc = 0x2a4308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955576));
    // 0x2a430c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a430cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a4310: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a4310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4314: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A4314u;
    SET_GPR_U32(ctx, 31, 0x2A431Cu);
    ctx->pc = 0x2A4318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4314u;
    // 0x2a4318: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A4314u, 0x2A431Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A431Cu;
label_2a431c:
    // 0x2a431c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2a431cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2a4320: 0x3c05000b  lui         $a1, 0xB
    ctx->pc = 0x2a4320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11 << 16));
    // 0x2a4324: 0x24844048  addiu       $a0, $a0, 0x4048
    ctx->pc = 0x2a4324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16456));
    // 0x2a4328: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A4328u;
    SET_GPR_U32(ctx, 31, 0x2A4330u);
    ctx->pc = 0x2A432Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4328u;
    // 0x2a432c: 0x34a50096  ori         $a1, $a1, 0x96 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)150);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A4328u, 0x2A4330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4330u;
label_2a4330:
    // 0x2a4330: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2A4330u;
    {
        const bool branch_taken_0x2a4330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4330u;
        // 0x2a4334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4330) {
            ctx->pc = 0x2A4374u;
            goto label_2a4374;
        }
    }
    ctx->pc = 0x2A4338u;
label_2a4338:
    // 0x2a4338: 0xc07eb2e  jal         func_1FACB8
    ctx->pc = 0x2A4338u;
    SET_GPR_U32(ctx, 31, 0x2A4340u);
    ctx->pc = 0x1FACB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FACB8u, 0x2A4338u, 0x2A4340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4340u;
label_2a4340:
    // 0x2a4340: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2A4340u;
    {
        const bool branch_taken_0x2a4340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4340) {
            ctx->pc = 0x2A4344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4340u;
            // 0x2a4344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4374u;
            goto label_2a4374;
        }
    }
    ctx->pc = 0x2A4348u;
    // 0x2a4348: 0xc0a9228  jal         func_2A48A0
    ctx->pc = 0x2A4348u;
    SET_GPR_U32(ctx, 31, 0x2A4350u);
    ctx->pc = 0x2A434Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4348u;
    // 0x2a434c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A48A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A48A0u, 0x2A4348u, 0x2A4350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4350u;
label_2a4350:
    // 0x2a4350: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4350u;
    {
        const bool branch_taken_0x2a4350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4350u;
        // 0x2a4354: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4350) {
            ctx->pc = 0x2A4374u;
            goto label_2a4374;
        }
    }
    ctx->pc = 0x2A4358u;
label_2a4358:
    // 0x2a4358: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2a4358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2a435c:
    // 0x2a435c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2a435cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2a4360: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a4360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4364: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a4364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a4368: 0xae240048  sw          $a0, 0x48($s1)
    ctx->pc = 0x2a4368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 4));
label_2a436c:
    // 0x2a436c: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2a436cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_2a4370:
    // 0x2a4370: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a4370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4374:
    // 0x2a4374: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2a4374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4378: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2a4378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a437c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2a437cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4380: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2a4380u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a4384: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a4384u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a4388: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2a4388u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a438c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2a438cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a4390: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2a4390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2a4394: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4394u;
        // 0x2a4398: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A439Cu;
    // 0x2a439c: 0x0  nop
    ctx->pc = 0x2a439cu;
    // NOP
    ctx->pc = 0x2a43a0u;
}
