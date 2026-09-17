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

// Function: sub_00119F28
// Address: 0x119f28 - 0x11a110
void sub_00119F28_0x119f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119F28_0x119f28");
#endif

    switch (ctx->pc) {
        case 0x119f90u: goto label_119f90;
        case 0x119fccu: goto label_119fcc;
        case 0x119fd4u: goto label_119fd4;
        case 0x11a008u: goto label_11a008;
        case 0x11a014u: goto label_11a014;
        case 0x11a024u: goto label_11a024;
        case 0x11a040u: goto label_11a040;
        case 0x11a06cu: goto label_11a06c;
        case 0x11a0a4u: goto label_11a0a4;
        case 0x11a0c0u: goto label_11a0c0;
        case 0x11a0ecu: goto label_11a0ec;
        default: break;
    }

    ctx->pc = 0x119f28u;

label_119f28:
    // 0x119f28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x119f2c: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x119f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x119f30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119f34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x119f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x119f38: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x119f38u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x119f3c: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119F3Cu;
    {
        const bool branch_taken_0x119f3c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x119F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F3Cu;
        // 0x119f40: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f3c) {
            ctx->pc = 0x119F54u;
            goto label_119f54;
        }
    }
    ctx->pc = 0x119F44u;
    // 0x119f44: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x119f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x119f48: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x119f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x119f4c: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x119F4Cu;
    {
        const bool branch_taken_0x119f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x119f4c) {
            ctx->pc = 0x119F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119F4Cu;
            // 0x119f50: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119F60u;
            goto label_119f60;
        }
    }
    ctx->pc = 0x119F54u;
label_119f54:
    // 0x119f54: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x119f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x119f58: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x119F58u;
    {
        const bool branch_taken_0x119f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F58u;
        // 0x119f5c: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f58) {
            ctx->pc = 0x119FD8u;
            goto label_119fd8;
        }
    }
    ctx->pc = 0x119F60u;
label_119f60:
    // 0x119f60: 0x24422148  addiu       $v0, $v0, 0x2148
    ctx->pc = 0x119f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8520));
    // 0x119f64: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x119f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x119f68: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119F68u;
    {
        const bool branch_taken_0x119f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x119f68) {
            ctx->pc = 0x119F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119F68u;
            // 0x119f6c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119F7Cu;
            goto label_119f7c;
        }
    }
    ctx->pc = 0x119F70u;
    // 0x119f70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x119f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x119f74: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x119F74u;
    {
        const bool branch_taken_0x119f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F74u;
        // 0x119f78: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f74) {
            ctx->pc = 0x119FD8u;
            goto label_119fd8;
        }
    }
    ctx->pc = 0x119F7Cu;
label_119f7c:
    // 0x119f7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x119f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x119f80: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x119F80u;
    {
        const bool branch_taken_0x119f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F80u;
        // 0x119f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f80) {
            ctx->pc = 0x119FD8u;
            goto label_119fd8;
        }
    }
    ctx->pc = 0x119F88u;
    // 0x119f88: 0xc0466c0  jal         func_119B00
    ctx->pc = 0x119F88u;
    SET_GPR_U32(ctx, 31, 0x119F90u);
    ctx->pc = 0x119B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B00u, 0x119F88u, 0x119F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F90u;
label_119f90:
    // 0x119f90: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x119f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x119f94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f98: 0xde040010  ld          $a0, 0x10($s0)
    ctx->pc = 0x119f98u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x119f9c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x119f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x119fa0: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x119fa0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x119fa4: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x119fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x119fa8: 0x224202f  dsubu       $a0, $s1, $a0
    ctx->pc = 0x119fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) - GPR_U64(ctx, 4));
    // 0x119fac: 0x30a60002  andi        $a2, $a1, 0x2
    ctx->pc = 0x119facu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x119fb0: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x119fb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x119fb4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x119fb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x119fb8: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x119fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x119fbc: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x119FBCu;
    {
        const bool branch_taken_0x119fbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x119FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FBCu;
        // 0x119fc0: 0xae05000c  sw          $a1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fbc) {
            ctx->pc = 0x119FD4u;
            goto label_119fd4;
        }
    }
    ctx->pc = 0x119FC4u;
    // 0x119fc4: 0xc046608  jal         func_119820
    ctx->pc = 0x119FC4u;
    SET_GPR_U32(ctx, 31, 0x119FCCu);
    ctx->pc = 0x119FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119FC4u;
    // 0x119fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119820u, 0x119FC4u, 0x119FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FCCu;
label_119fcc:
    // 0x119fcc: 0xc046582  jal         func_119608
    ctx->pc = 0x119FCCu;
    SET_GPR_U32(ctx, 31, 0x119FD4u);
    ctx->pc = 0x119FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119FCCu;
    // 0x119fd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119608u, 0x119FCCu, 0x119FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FD4u;
label_119fd4:
    // 0x119fd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x119fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_119fd8:
    // 0x119fd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119fdc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119fdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x119FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FE4u;
        // 0x119fe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119FECu;
    // 0x119fec: 0x0  nop
    ctx->pc = 0x119fecu;
    // NOP
    // 0x119ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x119ff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119ff8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119ffc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x119ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11a000: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x11A000u;
    SET_GPR_U32(ctx, 31, 0x11A008u);
    ctx->pc = 0x11A004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A000u;
    // 0x11a004: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x11A000u, 0x11A008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A008u;
label_11a008:
    // 0x11a008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a00c: 0xc0467ca  jal         func_119F28
    ctx->pc = 0x11A00Cu;
    SET_GPR_U32(ctx, 31, 0x11A014u);
    ctx->pc = 0x11A010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A00Cu;
    // 0x11a010: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119F28u;
    goto label_119f28;
    ctx->pc = 0x11A014u;
label_11a014:
    // 0x11a014: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A014u;
    {
        const bool branch_taken_0x11a014 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A014u;
        // 0x11a018: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a014) {
            ctx->pc = 0x11A024u;
            goto label_11a024;
        }
    }
    ctx->pc = 0x11A01Cu;
    // 0x11a01c: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x11A01Cu;
    SET_GPR_U32(ctx, 31, 0x11A024u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x11A01Cu, 0x11A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A024u;
label_11a024:
    // 0x11a024: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11a024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a028: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11a028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a02c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a02cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a034: 0x3e00008  jr          $ra
    ctx->pc = 0x11A034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A034u;
        // 0x11a038: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A03Cu;
    // 0x11a03c: 0x0  nop
    ctx->pc = 0x11a03cu;
    // NOP
label_11a040:
    // 0x11a040: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11a040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11a044: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a048: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11a048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a04c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11a04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11a050: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a054: 0x111282  srl         $v0, $s1, 10
    ctx->pc = 0x11a054u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 10));
    // 0x11a058: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11a058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11a05c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11a05cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a060: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11a060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11a064: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x11A064u;
    SET_GPR_U32(ctx, 31, 0x11A06Cu);
    ctx->pc = 0x11A068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A064u;
    // 0x11a068: 0x28180  sll         $s0, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x11A064u, 0x11A06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A06Cu;
label_11a06c:
    // 0x11a06c: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A06Cu;
    {
        const bool branch_taken_0x11a06c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x11A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A06Cu;
        // 0x11a070: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a06c) {
            ctx->pc = 0x11A094u;
            goto label_11a094;
        }
    }
    ctx->pc = 0x11A074u;
    // 0x11a074: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x11a074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11a078: 0x322203ff  andi        $v0, $s1, 0x3FF
    ctx->pc = 0x11a078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1023);
    // 0x11a07c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A07Cu;
    {
        const bool branch_taken_0x11a07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A07Cu;
        // 0x11a080: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a07c) {
            ctx->pc = 0x11A094u;
            goto label_11a094;
        }
    }
    ctx->pc = 0x11A084u;
    // 0x11a084: 0x24422148  addiu       $v0, $v0, 0x2148
    ctx->pc = 0x11a084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8520));
    // 0x11a088: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x11a088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x11a08c: 0x54710007  bnel        $v1, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A08Cu;
    {
        const bool branch_taken_0x11a08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x11a08c) {
            ctx->pc = 0x11A090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A08Cu;
            // 0x11a090: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A0ACu;
            goto label_11a0ac;
        }
    }
    ctx->pc = 0x11A094u;
label_11a094:
    // 0x11a094: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x11A094u;
    {
        const bool branch_taken_0x11a094 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A094u;
        // 0x11a098: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a094) {
            ctx->pc = 0x11A0F0u;
            goto label_11a0f0;
        }
    }
    ctx->pc = 0x11A09Cu;
    // 0x11a09c: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x11A09Cu;
    SET_GPR_U32(ctx, 31, 0x11A0A4u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x11A09Cu, 0x11A0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A0A4u;
label_11a0a4:
    // 0x11a0a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11A0A4u;
    {
        const bool branch_taken_0x11a0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0A4u;
        // 0x11a0a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0a4) {
            ctx->pc = 0x11A0F0u;
            goto label_11a0f0;
        }
    }
    ctx->pc = 0x11A0ACu;
label_11a0ac:
    // 0x11a0ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11a0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11a0b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A0B0u;
    {
        const bool branch_taken_0x11a0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0B0u;
        // 0x11a0b4: 0xde110018  ld          $s1, 0x18($s0) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0b0) {
            ctx->pc = 0x11A0D8u;
            goto label_11a0d8;
        }
    }
    ctx->pc = 0x11A0B8u;
    // 0x11a0b8: 0xc0466c0  jal         func_119B00
    ctx->pc = 0x11A0B8u;
    SET_GPR_U32(ctx, 31, 0x11A0C0u);
    ctx->pc = 0x119B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B00u, 0x11A0B8u, 0x11A0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A0C0u;
label_11a0c0:
    // 0x11a0c0: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x11a0c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11a0c4: 0xfe120018  sd          $s2, 0x18($s0)
    ctx->pc = 0x11a0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 18));
    // 0x11a0c8: 0x43182f  dsubu       $v1, $v0, $v1
    ctx->pc = 0x11a0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x11a0cc: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x11a0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x11a0d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11A0D0u;
    {
        const bool branch_taken_0x11a0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0D0u;
        // 0x11a0d4: 0x223882d  daddu       $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0d0) {
            ctx->pc = 0x11A0DCu;
            goto label_11a0dc;
        }
    }
    ctx->pc = 0x11A0D8u;
label_11a0d8:
    // 0x11a0d8: 0xfe120018  sd          $s2, 0x18($s0)
    ctx->pc = 0x11a0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 18));
label_11a0dc:
    // 0x11a0dc: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A0DCu;
    {
        const bool branch_taken_0x11a0dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0DCu;
        // 0x11a0e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0dc) {
            ctx->pc = 0x11A0F0u;
            goto label_11a0f0;
        }
    }
    ctx->pc = 0x11A0E4u;
    // 0x11a0e4: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x11A0E4u;
    SET_GPR_U32(ctx, 31, 0x11A0ECu);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x11A0E4u, 0x11A0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A0ECu;
label_11a0ec:
    // 0x11a0ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11a0ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a0f0:
    // 0x11a0f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11a0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a0f4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11a0f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a0f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11a0f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a0fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a0fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a104: 0x3e00008  jr          $ra
    ctx->pc = 0x11A104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A104u;
        // 0x11a108: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A10Cu;
    // 0x11a10c: 0x0  nop
    ctx->pc = 0x11a10cu;
    // NOP
    ctx->pc = 0x11a110u;
}
