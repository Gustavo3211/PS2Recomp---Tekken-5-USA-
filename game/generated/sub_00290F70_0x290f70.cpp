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

// Function: sub_00290F70
// Address: 0x290f70 - 0x291050
void sub_00290F70_0x290f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290F70_0x290f70");
#endif

    switch (ctx->pc) {
        case 0x290f90u: goto label_290f90;
        case 0x290fc4u: goto label_290fc4;
        case 0x290fd8u: goto label_290fd8;
        case 0x290ff8u: goto label_290ff8;
        case 0x291018u: goto label_291018;
        case 0x29102cu: goto label_29102c;
        default: break;
    }

    ctx->pc = 0x290f70u;

    // 0x290f70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x290f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x290f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x290f78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x290f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x290f7c: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x290f7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x290f80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x290f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x290f84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x290f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x290f88: 0xc086620  jal         func_219880
    ctx->pc = 0x290F88u;
    SET_GPR_U32(ctx, 31, 0x290F90u);
    ctx->pc = 0x290F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290F88u;
    // 0x290f8c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219880u, 0x290F88u, 0x290F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290F90u;
label_290f90:
    // 0x290f90: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x290f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x290f94: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x290f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x290f98: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x290f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x290f9c: 0x245170d0  addiu       $s1, $v0, 0x70D0
    ctx->pc = 0x290f9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 28880));
    // 0x290fa0: 0x24a5003b  addiu       $a1, $a1, 0x3B
    ctx->pc = 0x290fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 59));
    // 0x290fa4: 0x24070063  addiu       $a3, $zero, 0x63
    ctx->pc = 0x290fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x290fa8: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x290fa8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x290fac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290fb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x290fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290fb4: 0x2812  mflo        $a1
    ctx->pc = 0x290fb4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x290fb8: 0x2ca20064  sltiu       $v0, $a1, 0x64
    ctx->pc = 0x290fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x290fbc: 0xc0a5ce6  jal         func_297398
    ctx->pc = 0x290FBCu;
    SET_GPR_U32(ctx, 31, 0x290FC4u);
    ctx->pc = 0x290FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290FBCu;
    // 0x290fc0: 0xe2280a  movz        $a1, $a3, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297398u, 0x290FBCu, 0x290FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290FC4u;
label_290fc4:
    // 0x290fc4: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x290fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x290fc8: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x290FC8u;
    {
        const bool branch_taken_0x290fc8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x290FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290FC8u;
        // 0x290fcc: 0xc6540158  lwc1        $f20, 0x158($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290fc8) {
            ctx->pc = 0x291008u;
            goto label_291008;
        }
    }
    ctx->pc = 0x290FD0u;
    // 0x290fd0: 0x26330008  addiu       $s3, $s1, 0x8
    ctx->pc = 0x290fd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x290fd4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x290fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_290fd8:
    // 0x290fd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x290fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x290fdc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x290fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x290fe0: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x290fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x290fe4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x290FE4u;
    {
        const bool branch_taken_0x290fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x290FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290FE4u;
        // 0x290fe8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290fe4) {
            ctx->pc = 0x290FF8u;
            goto label_290ff8;
        }
    }
    ctx->pc = 0x290FECu;
    // 0x290fec: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x290fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x290ff0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x290FF0u;
    SET_GPR_U32(ctx, 31, 0x290FF8u);
    ctx->pc = 0x290FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290FF0u;
    // 0x290ff4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x290FF0u, 0x290FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290FF8u;
label_290ff8:
    // 0x290ff8: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x290ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x290ffc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x290ffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x291000: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x291000u;
    {
        const bool branch_taken_0x291000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291000u;
        // 0x291004: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291000) {
            ctx->pc = 0x290FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290fd8;
        }
    }
    ctx->pc = 0x291008u;
label_291008:
    // 0x291008: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x291008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x29100c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29100cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291010: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x291010u;
    SET_GPR_U32(ctx, 31, 0x291018u);
    ctx->pc = 0x291014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291010u;
    // 0x291014: 0x24a5ac68  addiu       $a1, $a1, -0x5398 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x291010u, 0x291018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291018u;
label_291018:
    // 0x291018: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291018u;
    {
        const bool branch_taken_0x291018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291018u;
        // 0x29101c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291018) {
            ctx->pc = 0x29102Cu;
            goto label_29102c;
        }
    }
    ctx->pc = 0x291020u;
    // 0x291020: 0xc64c0158  lwc1        $f12, 0x158($s2)
    ctx->pc = 0x291020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291024: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x291024u;
    SET_GPR_U32(ctx, 31, 0x29102Cu);
    ctx->pc = 0x291028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291024u;
    // 0x291028: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x291024u, 0x29102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29102Cu;
label_29102c:
    // 0x29102c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29102cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291030: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x291030u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x291034: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x291034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291038: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x291038u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29103c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29103cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291040: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x291040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x291044: 0x3e00008  jr          $ra
    ctx->pc = 0x291044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291044u;
        // 0x291048: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29104Cu;
    // 0x29104c: 0x0  nop
    ctx->pc = 0x29104cu;
    // NOP
    ctx->pc = 0x291050u;
}
