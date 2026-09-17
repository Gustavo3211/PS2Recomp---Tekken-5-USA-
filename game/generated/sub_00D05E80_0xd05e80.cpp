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

// Function: sub_00D05E80
// Address: 0xd05e80 - 0xd06010
void sub_00D05E80_0xd05e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00D05E80_0xd05e80");
#endif

    switch (ctx->pc) {
        case 0xd05eb8u: goto label_d05eb8;
        case 0xd05ec0u: goto label_d05ec0;
        case 0xd05ed8u: goto label_d05ed8;
        case 0xd05ef8u: goto label_d05ef8;
        case 0xd05f00u: goto label_d05f00;
        case 0xd05f08u: goto label_d05f08;
        case 0xd05f18u: goto label_d05f18;
        case 0xd05f28u: goto label_d05f28;
        case 0xd05f40u: goto label_d05f40;
        case 0xd05f48u: goto label_d05f48;
        case 0xd05f60u: goto label_d05f60;
        case 0xd05f70u: goto label_d05f70;
        case 0xd05f80u: goto label_d05f80;
        case 0xd05f88u: goto label_d05f88;
        case 0xd05fe8u: goto label_d05fe8;
        default: break;
    }

    ctx->pc = 0xd05e80u;

    // 0xd05e80: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0xd05e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0xd05e84: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0xd05e84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0xd05e88: 0x8c435ec0  lw          $v1, 0x5EC0($v0)
    ctx->pc = 0xd05e88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1E5EC0u));
    // 0xd05e8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0xd05e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0xd05e90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0xd05e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0xd05e94: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0xd05e94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05e98: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0xd05e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0xd05e9c: 0x3c1400d1  lui         $s4, 0xD1
    ctx->pc = 0xd05e9cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)209 << 16));
    // 0xd05ea0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0xd05ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0xd05ea4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0xd05ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0xd05ea8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0xd05ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0xd05eac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0xd05eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0xd05eb0: 0xc040884  jal         func_102210
    ctx->pc = 0xD05EB0u;
    SET_GPR_U32(ctx, 31, 0xD05EB8u);
    ctx->pc = 0xD05EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05EB0u;
    // 0xd05eb4: 0x28720002  slti        $s2, $v1, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x102210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102210u, 0xD05EB0u, 0xD05EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05EB8u;
label_d05eb8:
    // 0xd05eb8: 0xc04066a  jal         func_1019A8
    ctx->pc = 0xD05EB8u;
    SET_GPR_U32(ctx, 31, 0xD05EC0u);
    ctx->pc = 0xD05EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05EB8u;
    // 0xd05ebc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1019A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1019A8u, 0xD05EB8u, 0xD05EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05EC0u;
label_d05ec0:
    // 0xd05ec0: 0x132400  sll         $a0, $s3, 16
    ctx->pc = 0xd05ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0xd05ec4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0xd05ec4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0xd05ec8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0xd05ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0xd05ecc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0xd05eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0xd05ed0: 0xc04081c  jal         func_102070
    ctx->pc = 0xD05ED0u;
    SET_GPR_U32(ctx, 31, 0xD05ED8u);
    ctx->pc = 0xD05ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05ED0u;
    // 0xd05ed4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102070u, 0xD05ED0u, 0xD05ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05ED8u;
label_d05ed8:
    // 0xd05ed8: 0x268463c0  addiu       $a0, $s4, 0x63C0
    ctx->pc = 0xd05ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25536));
    // 0xd05edc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0xd05edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05ee0: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0xd05ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0xd05ee4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0xd05ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0xd05ee8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0xd05ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0xd05eec: 0x24090031  addiu       $t1, $zero, 0x31
    ctx->pc = 0xd05eecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0xd05ef0: 0xc0408ce  jal         func_102338
    ctx->pc = 0xD05EF0u;
    SET_GPR_U32(ctx, 31, 0xD05EF8u);
    ctx->pc = 0xD05EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05EF0u;
    // 0xd05ef4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102338u, 0xD05EF0u, 0xD05EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05EF8u;
label_d05ef8:
    // 0xd05ef8: 0xc043d88  jal         func_10F620
    ctx->pc = 0xD05EF8u;
    SET_GPR_U32(ctx, 31, 0xD05F00u);
    ctx->pc = 0xD05EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05EF8u;
    // 0xd05efc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0xD05EF8u, 0xD05F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05F00u;
label_d05f00:
    // 0xd05f00: 0xc040660  jal         func_101980
    ctx->pc = 0xD05F00u;
    SET_GPR_U32(ctx, 31, 0xD05F08u);
    ctx->pc = 0xD05F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05F00u;
    // 0xd05f04: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101980u, 0xD05F00u, 0xD05F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05F08u;
label_d05f08:
    // 0xd05f08: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0xD05F08u;
    {
        const bool branch_taken_0xd05f08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0xD05F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD05F08u;
        // 0xd05f0c: 0xaf82ccf0  sw          $v0, -0x3310($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294954224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0xd05f08) {
            ctx->pc = 0xD05F20u;
            goto label_d05f20;
        }
    }
    ctx->pc = 0xD05F10u;
    // 0xd05f10: 0xc3416e8  jal         func_D05BA0
    ctx->pc = 0xD05F10u;
    SET_GPR_U32(ctx, 31, 0xD05F18u);
    ctx->pc = 0xD05BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xD05BA0u, 0xD05F10u, 0xD05F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05F18u;
label_d05f18:
    // 0xd05f18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0xD05F18u;
    {
        const bool branch_taken_0xd05f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0xd05f18) {
            ctx->pc = 0xD05F28u;
            goto label_d05f28;
        }
    }
    ctx->pc = 0xD05F20u;
label_d05f20:
    // 0xd05f20: 0xc34171e  jal         func_D05C78
    ctx->pc = 0xD05F20u;
    SET_GPR_U32(ctx, 31, 0xD05F28u);
    ctx->pc = 0xD05C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xD05C78u, 0xD05F20u, 0xD05F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05F28u;
label_d05f28:
    // 0xd05f28: 0xf  sync
    ctx->pc = 0xd05f28u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0xd05f2c: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0xd05f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0xd05f30: 0x13800b  movn        $s0, $zero, $s3
    ctx->pc = 0xd05f30u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0xd05f34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0xd05f34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05f38: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0xd05f38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0xd05f3c: 0x0  nop
    ctx->pc = 0xd05f3cu;
    // NOP
label_d05f40:
    // 0xd05f40: 0xc04098c  jal         func_102630
    ctx->pc = 0xD05F40u;
    SET_GPR_U32(ctx, 31, 0xD05F48u);
    ctx->pc = 0xD05F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05F40u;
    // 0xd05f44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102630u, 0xD05F40u, 0xD05F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05F48u;
label_d05f48:
    // 0xd05f48: 0x8f83c838  lw          $v1, -0x37C8($gp)
    ctx->pc = 0xd05f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953016)));
    // 0xd05f4c: 0x268463c0  addiu       $a0, $s4, 0x63C0
    ctx->pc = 0xd05f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25536));
    // 0xd05f50: 0x2a31823  subu        $v1, $s5, $v1
    ctx->pc = 0xd05f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0xd05f54: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0xd05f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05f58: 0xc040974  jal         func_1025D0
    ctx->pc = 0xD05F58u;
    SET_GPR_U32(ctx, 31, 0xD05F60u);
    ctx->pc = 0xD05F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05F58u;
    // 0xd05f5c: 0xaf83c838  sw          $v1, -0x37C8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953016), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1025D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1025D0u, 0xD05F58u, 0xD05F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05F60u;
label_d05f60:
    // 0xd05f60: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0xD05F60u;
    {
        const bool branch_taken_0xd05f60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0xd05f60) {
            ctx->pc = 0xD05F78u;
            goto label_d05f78;
        }
    }
    ctx->pc = 0xD05F68u;
    // 0xd05f68: 0xc3415c0  jal         func_D05700
    ctx->pc = 0xD05F68u;
    SET_GPR_U32(ctx, 31, 0xD05F70u);
    ctx->pc = 0xD05700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xD05700u, 0xD05F68u, 0xD05F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05F70u;
label_d05f70:
    // 0xd05f70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0xD05F70u;
    {
        const bool branch_taken_0xd05f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0xd05f70) {
            ctx->pc = 0xD05F80u;
            goto label_d05f80;
        }
    }
    ctx->pc = 0xD05F78u;
label_d05f78:
    // 0xd05f78: 0xc34162a  jal         func_D058A8
    ctx->pc = 0xD05F78u;
    SET_GPR_U32(ctx, 31, 0xD05F80u);
    ctx->pc = 0xD058A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xD058A8u, 0xD05F78u, 0xD05F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05F80u;
label_d05f80:
    // 0xd05f80: 0xc341694  jal         func_D05A50
    ctx->pc = 0xD05F80u;
    SET_GPR_U32(ctx, 31, 0xD05F88u);
    ctx->pc = 0xD05F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05F80u;
    // 0xd05f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0xD05A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xD05A50u, 0xD05F80u, 0xD05F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05F88u;
label_d05f88:
    // 0xd05f88: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0xD05F88u;
    {
        const bool branch_taken_0xd05f88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0xD05F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD05F88u;
        // 0xd05f8c: 0x101600  sll         $v0, $s0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0xd05f88) {
            ctx->pc = 0xD05FA8u;
            goto label_d05fa8;
        }
    }
    ctx->pc = 0xD05F90u;
    // 0xd05f90: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0xD05F90u;
    {
        const bool branch_taken_0xd05f90 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0xD05F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD05F90u;
        // 0xd05f94: 0x26030008  addiu       $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0xd05f90) {
            ctx->pc = 0xD05FD8u;
            goto label_d05fd8;
        }
    }
    ctx->pc = 0xD05F98u;
    // 0xd05f98: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0xd05f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0xd05f9c: 0x72100a  movz        $v0, $v1, $s2
    ctx->pc = 0xd05f9cu;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0xd05fa0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0xD05FA0u;
    {
        const bool branch_taken_0xd05fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0xD05FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD05FA0u;
        // 0xd05fa4: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0xd05fa0) {
            ctx->pc = 0xD05FD0u;
            goto label_d05fd0;
        }
    }
    ctx->pc = 0xD05FA8u;
label_d05fa8:
    // 0xd05fa8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0xD05FA8u;
    {
        const bool branch_taken_0xd05fa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0xD05FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD05FA8u;
        // 0xd05fac: 0x2a220005  slti        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0xd05fa8) {
            ctx->pc = 0xD05FC8u;
            goto label_d05fc8;
        }
    }
    ctx->pc = 0xD05FB0u;
    // 0xd05fb0: 0x5440ffe3  bnel        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0xD05FB0u;
    {
        const bool branch_taken_0xd05fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0xd05fb0) {
            ctx->pc = 0xD05FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0xD05FB0u;
            // 0xd05fb4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0xD05F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_d05f40;
        }
    }
    ctx->pc = 0xD05FB8u;
    // 0xd05fb8: 0x260200f8  addiu       $v0, $s0, 0xF8
    ctx->pc = 0xd05fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    // 0xd05fbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0xD05FBCu;
    {
        const bool branch_taken_0xd05fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0xD05FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD05FBCu;
        // 0xd05fc0: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0xd05fbc) {
            ctx->pc = 0xD05FD0u;
            goto label_d05fd0;
        }
    }
    ctx->pc = 0xD05FC4u;
    // 0xd05fc4: 0x0  nop
    ctx->pc = 0xd05fc4u;
    // NOP
label_d05fc8:
    // 0xd05fc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0xD05FC8u;
    {
        const bool branch_taken_0xd05fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0xd05fc8) {
            ctx->pc = 0xD05FD8u;
            goto label_d05fd8;
        }
    }
    ctx->pc = 0xD05FD0u;
label_d05fd0:
    // 0xd05fd0: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0xD05FD0u;
    {
        const bool branch_taken_0xd05fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0xD05FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD05FD0u;
        // 0xd05fd4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0xd05fd0) {
            ctx->pc = 0xD05F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_d05f40;
        }
    }
    ctx->pc = 0xD05FD8u;
label_d05fd8:
    // 0xd05fd8: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0xD05FD8u;
    {
        const bool branch_taken_0xd05fd8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0xD05FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD05FD8u;
        // 0xd05fdc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0xd05fd8) {
            ctx->pc = 0xD05FECu;
            goto label_d05fec;
        }
    }
    ctx->pc = 0xD05FE0u;
    // 0xd05fe0: 0xc341754  jal         func_D05D50
    ctx->pc = 0xD05FE0u;
    SET_GPR_U32(ctx, 31, 0xD05FE8u);
    ctx->pc = 0xD05D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xD05D50u, 0xD05FE0u, 0xD05FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05FE8u;
label_d05fe8:
    // 0xd05fe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0xd05fe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_d05fec:
    // 0xd05fec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0xd05fecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0xd05ff0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0xd05ff0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0xd05ff4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0xd05ff4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0xd05ff8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0xd05ff8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0xd05ffc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0xd05ffcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0xd06000: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0xd06000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0xd06004: 0x3e00008  jr          $ra
    ctx->pc = 0xD06004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0xD06008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD06004u;
        // 0xd06008: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0xD06004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0xD0600Cu;
    // 0xd0600c: 0x0  nop
    ctx->pc = 0xd0600cu;
    // NOP
    ctx->pc = 0xd06010u;
}
