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

// Function: sub_00241F30
// Address: 0x241f30 - 0x242120
void sub_00241F30_0x241f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241F30_0x241f30");
#endif

    switch (ctx->pc) {
        case 0x241f8cu: goto label_241f8c;
        case 0x241f98u: goto label_241f98;
        case 0x241fa4u: goto label_241fa4;
        case 0x241fe0u: goto label_241fe0;
        case 0x241fecu: goto label_241fec;
        case 0x242008u: goto label_242008;
        case 0x242010u: goto label_242010;
        case 0x242038u: goto label_242038;
        case 0x242048u: goto label_242048;
        case 0x242068u: goto label_242068;
        case 0x242078u: goto label_242078;
        case 0x24208cu: goto label_24208c;
        case 0x24209cu: goto label_24209c;
        case 0x2420a8u: goto label_2420a8;
        case 0x2420b8u: goto label_2420b8;
        case 0x2420c4u: goto label_2420c4;
        default: break;
    }

    ctx->pc = 0x241f30u;

    // 0x241f30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x241f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x241f34: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x241f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x241f38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x241f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241f3c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x241f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x241f40: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x241f40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241f44: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x241f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x241f48: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x241f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x241f4c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x241f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x241f50: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x241f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x241f54: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x241f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x241f58: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x241f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x241f5c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x241f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x241f60: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x241f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x241f64: 0x8e930050  lw          $s3, 0x50($s4)
    ctx->pc = 0x241f64u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x241f68: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x241f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x241f6c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x241f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x241f70: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x241f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x241f74: 0x3c160047  lui         $s6, 0x47
    ctx->pc = 0x241f74u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)71 << 16));
    // 0x241f78: 0x26d60710  addiu       $s6, $s6, 0x710
    ctx->pc = 0x241f78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1808));
    // 0x241f7c: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x241f7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x241f80: 0x8e970058  lw          $s7, 0x58($s4)
    ctx->pc = 0x241f80u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x241f84: 0xc090678  jal         func_2419E0
    ctx->pc = 0x241F84u;
    SET_GPR_U32(ctx, 31, 0x241F8Cu);
    ctx->pc = 0x241F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241F84u;
    // 0x241f88: 0x8e95005c  lw          $s5, 0x5C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2419E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2419E0u, 0x241F84u, 0x241F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241F8Cu;
label_241f8c:
    // 0x241f8c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x241f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x241f90: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x241F90u;
    {
        const bool branch_taken_0x241f90 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x241F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F90u;
        // 0x241f94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f90) {
            ctx->pc = 0x241FC8u;
            goto label_241fc8;
        }
    }
    ctx->pc = 0x241F98u;
label_241f98:
    // 0x241f98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x241f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x241f9c: 0xc0905ae  jal         func_2416B8
    ctx->pc = 0x241F9Cu;
    SET_GPR_U32(ctx, 31, 0x241FA4u);
    ctx->pc = 0x241FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241F9Cu;
    // 0x241fa0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2416B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416B8u, 0x241F9Cu, 0x241FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241FA4u;
label_241fa4:
    // 0x241fa4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x241fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241fa8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x241fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x241fac: 0xa620000c  sh          $zero, 0xC($s1)
    ctx->pc = 0x241facu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x241fb0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x241fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x241fb4: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x241fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x241fb8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x241fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x241fbc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x241fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241fc0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x241FC0u;
    {
        const bool branch_taken_0x241fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FC0u;
        // 0x241fc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241fc0) {
            ctx->pc = 0x241F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241f98;
        }
    }
    ctx->pc = 0x241FC8u;
label_241fc8:
    // 0x241fc8: 0x52e00049  beql        $s7, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x241FC8u;
    {
        const bool branch_taken_0x241fc8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x241fc8) {
            ctx->pc = 0x241FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241FC8u;
            // 0x241fcc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2420F0u;
            goto label_2420f0;
        }
    }
    ctx->pc = 0x241FD0u;
    // 0x241fd0: 0x52a00047  beql        $s5, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x241FD0u;
    {
        const bool branch_taken_0x241fd0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x241fd0) {
            ctx->pc = 0x241FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241FD0u;
            // 0x241fd4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2420F0u;
            goto label_2420f0;
        }
    }
    ctx->pc = 0x241FD8u;
    // 0x241fd8: 0xc097d14  jal         func_25F450
    ctx->pc = 0x241FD8u;
    SET_GPR_U32(ctx, 31, 0x241FE0u);
    ctx->pc = 0x241FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241FD8u;
    // 0x241fdc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F450u, 0x241FD8u, 0x241FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241FE0u;
label_241fe0:
    // 0x241fe0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x241fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241fe4: 0xc097d14  jal         func_25F450
    ctx->pc = 0x241FE4u;
    SET_GPR_U32(ctx, 31, 0x241FECu);
    ctx->pc = 0x241FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241FE4u;
    // 0x241fe8: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F450u, 0x241FE4u, 0x241FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241FECu;
label_241fec:
    // 0x241fec: 0x57c20040  bnel        $fp, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x241FECu;
    {
        const bool branch_taken_0x241fec = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x241fec) {
            ctx->pc = 0x241FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241FECu;
            // 0x241ff0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2420F0u;
            goto label_2420f0;
        }
    }
    ctx->pc = 0x241FF4u;
    // 0x241ff4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x241ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x241ff8: 0x1840003a  blez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x241FF8u;
    {
        const bool branch_taken_0x241ff8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x241FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FF8u;
        // 0x241ffc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ff8) {
            ctx->pc = 0x2420E4u;
            goto label_2420e4;
        }
    }
    ctx->pc = 0x242000u;
    // 0x242000: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x242000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242004: 0x0  nop
    ctx->pc = 0x242004u;
    // NOP
label_242008:
    // 0x242008: 0xc0905ae  jal         func_2416B8
    ctx->pc = 0x242008u;
    SET_GPR_U32(ctx, 31, 0x242010u);
    ctx->pc = 0x24200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242008u;
    // 0x24200c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2416B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416B8u, 0x242008u, 0x242010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242010u;
label_242010:
    // 0x242010: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x242010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242014: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x242014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242018: 0x25e102a  slt         $v0, $s2, $fp
    ctx->pc = 0x242018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x24201c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x24201cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242020: 0xa620000c  sh          $zero, 0xC($s1)
    ctx->pc = 0x242020u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x242024: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x242024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x242028: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x242028u;
    {
        const bool branch_taken_0x242028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242028u;
        // 0x24202c: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242028) {
            ctx->pc = 0x2420D0u;
            goto label_2420d0;
        }
    }
    ctx->pc = 0x242030u;
    // 0x242030: 0xc097d16  jal         func_25F458
    ctx->pc = 0x242030u;
    SET_GPR_U32(ctx, 31, 0x242038u);
    ctx->pc = 0x25F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F458u, 0x242030u, 0x242038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242038u;
label_242038:
    // 0x242038: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x242038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24203c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x24203cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242040: 0xc097d16  jal         func_25F458
    ctx->pc = 0x242040u;
    SET_GPR_U32(ctx, 31, 0x242048u);
    ctx->pc = 0x242044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242040u;
    // 0x242044: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F458u, 0x242040u, 0x242048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242048u;
label_242048:
    // 0x242048: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x242048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24204c: 0x5a000021  blezl       $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x24204Cu;
    {
        const bool branch_taken_0x24204c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x24204c) {
            ctx->pc = 0x242050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24204Cu;
            // 0x242050: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2420D4u;
            goto label_2420d4;
        }
    }
    ctx->pc = 0x242054u;
    // 0x242054: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x242054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242058: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x242058u;
    {
        const bool branch_taken_0x242058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242058u;
        // 0x24205c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242058) {
            ctx->pc = 0x242080u;
            goto label_242080;
        }
    }
    ctx->pc = 0x242060u;
    // 0x242060: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x242060u;
    SET_GPR_U32(ctx, 31, 0x242068u);
    ctx->pc = 0x242064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242060u;
    // 0x242064: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x242060u, 0x242068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242068u;
label_242068:
    // 0x242068: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x242068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x24206c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24206cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242070: 0xc0c1008  jal         func_304020
    ctx->pc = 0x242070u;
    SET_GPR_U32(ctx, 31, 0x242078u);
    ctx->pc = 0x242074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242070u;
    // 0x242074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304020u, 0x242070u, 0x242078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242078u;
label_242078:
    // 0x242078: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x242078u;
    {
        const bool branch_taken_0x242078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242078u;
        // 0x24207c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242078) {
            ctx->pc = 0x242084u;
            goto label_242084;
        }
    }
    ctx->pc = 0x242080u;
label_242080:
    // 0x242080: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x242080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_242084:
    // 0x242084: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x242084u;
    SET_GPR_U32(ctx, 31, 0x24208Cu);
    ctx->pc = 0x242088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242084u;
    // 0x242088: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x242084u, 0x24208Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24208Cu;
label_24208c:
    // 0x24208c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24208cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242090: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x242090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242094: 0xc0c101c  jal         func_304070
    ctx->pc = 0x242094u;
    SET_GPR_U32(ctx, 31, 0x24209Cu);
    ctx->pc = 0x242098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242094u;
    // 0x242098: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304070u, 0x242094u, 0x24209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24209Cu;
label_24209c:
    // 0x24209c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24209cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2420a0: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x2420A0u;
    SET_GPR_U32(ctx, 31, 0x2420A8u);
    ctx->pc = 0x2420A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2420A0u;
    // 0x2420a4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x2420A0u, 0x2420A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2420A8u;
label_2420a8:
    // 0x2420a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2420a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2420ac: 0x8e850074  lw          $a1, 0x74($s4)
    ctx->pc = 0x2420acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x2420b0: 0xc0c1054  jal         func_304150
    ctx->pc = 0x2420B0u;
    SET_GPR_U32(ctx, 31, 0x2420B8u);
    ctx->pc = 0x2420B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2420B0u;
    // 0x2420b4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304150u, 0x2420B0u, 0x2420B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2420B8u;
label_2420b8:
    // 0x2420b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2420b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2420bc: 0xc090614  jal         func_241850
    ctx->pc = 0x2420BCu;
    SET_GPR_U32(ctx, 31, 0x2420C4u);
    ctx->pc = 0x2420C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2420BCu;
    // 0x2420c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241850u, 0x2420BCu, 0x2420C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2420C4u;
label_2420c4:
    // 0x2420c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2420c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2420c8: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x2420c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2420cc: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2420ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2420d0:
    // 0x2420d0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2420d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2420d4:
    // 0x2420d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2420d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2420d8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2420d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2420dc: 0x5440ffca  bnel        $v0, $zero, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2420DCu;
    {
        const bool branch_taken_0x2420dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2420dc) {
            ctx->pc = 0x2420E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2420DCu;
            // 0x2420e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242008;
        }
    }
    ctx->pc = 0x2420E4u;
label_2420e4:
    // 0x2420e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2420e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2420e8: 0xae820078  sw          $v0, 0x78($s4)
    ctx->pc = 0x2420e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 2));
    // 0x2420ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2420ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2420f0:
    // 0x2420f0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2420f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2420f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2420f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2420f8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2420f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2420fc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2420fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x242100: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x242100u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x242104: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x242104u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x242108: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x242108u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24210c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x24210cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x242110: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x242110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x242114: 0x3e00008  jr          $ra
    ctx->pc = 0x242114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242114u;
        // 0x242118: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24211Cu;
    // 0x24211c: 0x0  nop
    ctx->pc = 0x24211cu;
    // NOP
    ctx->pc = 0x242120u;
}
