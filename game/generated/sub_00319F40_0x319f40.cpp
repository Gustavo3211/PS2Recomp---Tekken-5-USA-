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

// Function: sub_00319F40
// Address: 0x319f40 - 0x31a048
void sub_00319F40_0x319f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319F40_0x319f40");
#endif

    switch (ctx->pc) {
        case 0x319f40u: goto label_319f40;
        case 0x319f44u: goto label_319f44;
        case 0x319f48u: goto label_319f48;
        case 0x319f4cu: goto label_319f4c;
        case 0x319f50u: goto label_319f50;
        case 0x319f54u: goto label_319f54;
        case 0x319f58u: goto label_319f58;
        case 0x319f5cu: goto label_319f5c;
        case 0x319f60u: goto label_319f60;
        case 0x319f64u: goto label_319f64;
        case 0x319f68u: goto label_319f68;
        case 0x319f6cu: goto label_319f6c;
        case 0x319f70u: goto label_319f70;
        case 0x319f74u: goto label_319f74;
        case 0x319f78u: goto label_319f78;
        case 0x319f7cu: goto label_319f7c;
        case 0x319f80u: goto label_319f80;
        case 0x319f84u: goto label_319f84;
        case 0x319f88u: goto label_319f88;
        case 0x319f8cu: goto label_319f8c;
        case 0x319f90u: goto label_319f90;
        case 0x319f94u: goto label_319f94;
        case 0x319f98u: goto label_319f98;
        case 0x319f9cu: goto label_319f9c;
        case 0x319fa0u: goto label_319fa0;
        case 0x319fa4u: goto label_319fa4;
        case 0x319fa8u: goto label_319fa8;
        case 0x319facu: goto label_319fac;
        case 0x319fb0u: goto label_319fb0;
        case 0x319fb4u: goto label_319fb4;
        case 0x319fb8u: goto label_319fb8;
        case 0x319fbcu: goto label_319fbc;
        case 0x319fc0u: goto label_319fc0;
        case 0x319fc4u: goto label_319fc4;
        case 0x319fc8u: goto label_319fc8;
        case 0x319fccu: goto label_319fcc;
        case 0x319fd0u: goto label_319fd0;
        case 0x319fd4u: goto label_319fd4;
        case 0x319fd8u: goto label_319fd8;
        case 0x319fdcu: goto label_319fdc;
        case 0x319fe0u: goto label_319fe0;
        case 0x319fe4u: goto label_319fe4;
        case 0x319fe8u: goto label_319fe8;
        case 0x319fecu: goto label_319fec;
        case 0x319ff0u: goto label_319ff0;
        case 0x319ff4u: goto label_319ff4;
        case 0x319ff8u: goto label_319ff8;
        case 0x319ffcu: goto label_319ffc;
        case 0x31a000u: goto label_31a000;
        case 0x31a004u: goto label_31a004;
        case 0x31a008u: goto label_31a008;
        case 0x31a00cu: goto label_31a00c;
        case 0x31a010u: goto label_31a010;
        case 0x31a014u: goto label_31a014;
        case 0x31a018u: goto label_31a018;
        case 0x31a01cu: goto label_31a01c;
        case 0x31a020u: goto label_31a020;
        case 0x31a024u: goto label_31a024;
        case 0x31a028u: goto label_31a028;
        case 0x31a02cu: goto label_31a02c;
        case 0x31a030u: goto label_31a030;
        case 0x31a034u: goto label_31a034;
        case 0x31a038u: goto label_31a038;
        case 0x31a03cu: goto label_31a03c;
        case 0x31a040u: goto label_31a040;
        case 0x31a044u: goto label_31a044;
        default: break;
    }

    ctx->pc = 0x319f40u;

label_319f40:
    // 0x319f40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x319f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_319f44:
    // 0x319f44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x319f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_319f48:
    // 0x319f48: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x319f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_319f4c:
    // 0x319f4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x319f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_319f50:
    // 0x319f50: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x319f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_319f54:
    // 0x319f54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x319f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_319f58:
    // 0x319f58: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x319f58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_319f5c:
    // 0x319f5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x319f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_319f60:
    // 0x319f60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x319f60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_319f64:
    // 0x319f64: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x319f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_319f68:
    // 0x319f68: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x319f68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_319f6c:
    // 0x319f6c: 0x8f84c594  lw          $a0, -0x3A6C($gp)
    ctx->pc = 0x319f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952340)));
label_319f70:
    // 0x319f70: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x319f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_319f74:
    // 0x319f74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x319f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_319f78:
    // 0x319f78: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x319f78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_319f7c:
    // 0x319f7c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x319f7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_319f80:
    // 0x319f80: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x319f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_319f84:
    // 0x319f84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x319f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_319f88:
    // 0x319f88: 0xc0c6bb8  jal         func_31AEE0
label_319f8c:
    if (ctx->pc == 0x319F8Cu) {
        ctx->pc = 0x319F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F88u;
        // 0x319f8c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319F90u;
        goto label_319f90;
    }
    ctx->pc = 0x319F88u;
    SET_GPR_U32(ctx, 31, 0x319F90u);
    ctx->pc = 0x319F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319F88u;
    // 0x319f8c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AEE0u, 0x319F88u, 0x319F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319F90u;
label_319f90:
    // 0x319f90: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x319f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
label_319f94:
    // 0x319f94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x319f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_319f98:
    // 0x319f98: 0x24750480  addiu       $s5, $v1, 0x480
    ctx->pc = 0x319f98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
label_319f9c:
    // 0x319f9c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_319fa0:
    if (ctx->pc == 0x319FA0u) {
        ctx->pc = 0x319FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F9Cu;
        // 0x319fa0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319FA4u;
        goto label_319fa4;
    }
    ctx->pc = 0x319F9Cu;
    {
        const bool branch_taken_0x319f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F9Cu;
        // 0x319fa0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f9c) {
            ctx->pc = 0x31A018u;
            goto label_31a018;
        }
    }
    ctx->pc = 0x319FA4u;
label_319fa4:
    // 0x319fa4: 0xc0c75a2  jal         func_31D688
label_319fa8:
    if (ctx->pc == 0x319FA8u) {
        ctx->pc = 0x319FACu;
        goto label_319fac;
    }
    ctx->pc = 0x319FA4u;
    SET_GPR_U32(ctx, 31, 0x319FACu);
    ctx->pc = 0x31D688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D688u, 0x319FA4u, 0x319FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319FACu;
label_319fac:
    // 0x319fac: 0xc0c8864  jal         func_322190
label_319fb0:
    if (ctx->pc == 0x319FB0u) {
        ctx->pc = 0x319FB4u;
        goto label_319fb4;
    }
    ctx->pc = 0x319FACu;
    SET_GPR_U32(ctx, 31, 0x319FB4u);
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x319FACu, 0x319FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319FB4u;
label_319fb4:
    // 0x319fb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x319fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_319fb8:
    // 0x319fb8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x319fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_319fbc:
    // 0x319fbc: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x319fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
label_319fc0:
    // 0x319fc0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x319fc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_319fc4:
    // 0x319fc4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x319fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_319fc8:
    // 0x319fc8: 0x40f809  jalr        $v0
label_319fcc:
    if (ctx->pc == 0x319FCCu) {
        ctx->pc = 0x319FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FC8u;
        // 0x319fcc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319FD0u;
        goto label_319fd0;
    }
    ctx->pc = 0x319FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x319FD0u);
        ctx->pc = 0x319FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FC8u;
        // 0x319fcc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319FC8u, 0x319FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x319FD0u;
label_319fd0:
    // 0x319fd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x319fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_319fd4:
    // 0x319fd4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x319fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_319fd8:
    // 0x319fd8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x319fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_319fdc:
    // 0x319fdc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x319fdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_319fe0:
    // 0x319fe0: 0xc0c6b00  jal         func_31AC00
label_319fe4:
    if (ctx->pc == 0x319FE4u) {
        ctx->pc = 0x319FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FE0u;
        // 0x319fe4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319FE8u;
        goto label_319fe8;
    }
    ctx->pc = 0x319FE0u;
    SET_GPR_U32(ctx, 31, 0x319FE8u);
    ctx->pc = 0x319FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319FE0u;
    // 0x319fe4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AC00u, 0x319FE0u, 0x319FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319FE8u;
label_319fe8:
    // 0x319fe8: 0xc0c6bda  jal         func_31AF68
label_319fec:
    if (ctx->pc == 0x319FECu) {
        ctx->pc = 0x319FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FE8u;
        // 0x319fec: 0x8f84c594  lw          $a0, -0x3A6C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319FF0u;
        goto label_319ff0;
    }
    ctx->pc = 0x319FE8u;
    SET_GPR_U32(ctx, 31, 0x319FF0u);
    ctx->pc = 0x319FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319FE8u;
    // 0x319fec: 0x8f84c594  lw          $a0, -0x3A6C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AF68u, 0x319FE8u, 0x319FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319FF0u;
label_319ff0:
    // 0x319ff0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x319ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_319ff4:
    // 0x319ff4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x319ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_319ff8:
    // 0x319ff8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x319ff8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_319ffc:
    // 0x319ffc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x319ffcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31a000:
    // 0x31a000: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x31a000u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_31a004:
    // 0x31a004: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x31a004u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31a008:
    // 0x31a008: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x31a008u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_31a00c:
    // 0x31a00c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31a00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_31a010:
    // 0x31a010: 0x80c75ac  j           func_31D6B0
label_31a014:
    if (ctx->pc == 0x31A014u) {
        ctx->pc = 0x31A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A010u;
        // 0x31a014: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A018u;
        goto label_31a018;
    }
    ctx->pc = 0x31A010u;
    ctx->pc = 0x31A014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A010u;
    // 0x31a014: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D6B0u;
    sub_0031D6B0_0x31d6b0(rdram, ctx, runtime); return;
    ctx->pc = 0x31A018u;
label_31a018:
    // 0x31a018: 0xc0c6c2c  jal         func_31B0B0
label_31a01c:
    if (ctx->pc == 0x31A01Cu) {
        ctx->pc = 0x31A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A018u;
        // 0x31a01c: 0x8f84c594  lw          $a0, -0x3A6C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A020u;
        goto label_31a020;
    }
    ctx->pc = 0x31A018u;
    SET_GPR_U32(ctx, 31, 0x31A020u);
    ctx->pc = 0x31A01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A018u;
    // 0x31a01c: 0x8f84c594  lw          $a0, -0x3A6C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B0B0u, 0x31A018u, 0x31A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A020u;
label_31a020:
    // 0x31a020: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31a020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31a024:
    // 0x31a024: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31a024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_31a028:
    // 0x31a028: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31a028u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31a02c:
    // 0x31a02c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x31a02cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_31a030:
    // 0x31a030: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x31a030u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31a034:
    // 0x31a034: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x31a034u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_31a038:
    // 0x31a038: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31a038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_31a03c:
    // 0x31a03c: 0x3e00008  jr          $ra
label_31a040:
    if (ctx->pc == 0x31A040u) {
        ctx->pc = 0x31A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A03Cu;
        // 0x31a040: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A044u;
        goto label_31a044;
    }
    ctx->pc = 0x31A03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A03Cu;
        // 0x31a040: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A044u;
label_31a044:
    // 0x31a044: 0x0  nop
    ctx->pc = 0x31a044u;
    // NOP
    ctx->pc = 0x31a048u;
}
