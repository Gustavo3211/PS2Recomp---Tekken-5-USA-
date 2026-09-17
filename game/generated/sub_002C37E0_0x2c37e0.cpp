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

// Function: sub_002C37E0
// Address: 0x2c37e0 - 0x2c3900
void sub_002C37E0_0x2c37e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C37E0_0x2c37e0");
#endif

    switch (ctx->pc) {
        case 0x2c388cu: goto label_2c388c;
        case 0x2c3894u: goto label_2c3894;
        case 0x2c38c0u: goto label_2c38c0;
        case 0x2c38d0u: goto label_2c38d0;
        default: break;
    }

    ctx->pc = 0x2c37e0u;

    // 0x2c37e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c37e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c37e4: 0x2cc20006  sltiu       $v0, $a2, 0x6
    ctx->pc = 0x2c37e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c37e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c37e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c37ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c37ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c37f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c37f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c37f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c37f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c37f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2c37f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2c37fc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C37FCu;
    {
        const bool branch_taken_0x2c37fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37FCu;
        // 0x2c3800: 0x8e300898  lw          $s0, 0x898($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c37fc) {
            ctx->pc = 0x2C3870u;
            goto label_2c3870;
        }
    }
    ctx->pc = 0x2C3804u;
    // 0x2c3804: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c3804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c3808: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2c3808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2c380c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c380cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c3810: 0x8c63e130  lw          $v1, -0x1ED0($v1)
    ctx->pc = 0x2c3810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959408)));
    // 0x2c3814: 0x600008  jr          $v1
    ctx->pc = 0x2C3814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C3820u: goto label_2c3820;
            case 0x2C3830u: goto label_2c3830;
            case 0x2C3840u: goto label_2c3840;
            case 0x2C3850u: goto label_2c3850;
            case 0x2C3860u: goto label_2c3860;
            case 0x2C3870u: goto label_2c3870;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3814u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C381Cu;
    // 0x2c381c: 0x0  nop
    ctx->pc = 0x2c381cu;
    // NOP
label_2c3820:
    // 0x2c3820: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2c3820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2c3824: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2C3824u;
    {
        const bool branch_taken_0x2c3824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3824u;
        // 0x2c3828: 0xa6020070  sh          $v0, 0x70($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 112), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3824) {
            ctx->pc = 0x2C3874u;
            goto label_2c3874;
        }
    }
    ctx->pc = 0x2C382Cu;
    // 0x2c382c: 0x0  nop
    ctx->pc = 0x2c382cu;
    // NOP
label_2c3830:
    // 0x2c3830: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2c3830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c3834: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C3834u;
    {
        const bool branch_taken_0x2c3834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3834u;
        // 0x2c3838: 0xa6020070  sh          $v0, 0x70($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 112), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3834) {
            ctx->pc = 0x2C3874u;
            goto label_2c3874;
        }
    }
    ctx->pc = 0x2C383Cu;
    // 0x2c383c: 0x0  nop
    ctx->pc = 0x2c383cu;
    // NOP
label_2c3840:
    // 0x2c3840: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2c3840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2c3844: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C3844u;
    {
        const bool branch_taken_0x2c3844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3844u;
        // 0x2c3848: 0xa6020070  sh          $v0, 0x70($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 112), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3844) {
            ctx->pc = 0x2C3874u;
            goto label_2c3874;
        }
    }
    ctx->pc = 0x2C384Cu;
    // 0x2c384c: 0x0  nop
    ctx->pc = 0x2c384cu;
    // NOP
label_2c3850:
    // 0x2c3850: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2c3850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2c3854: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3854u;
    {
        const bool branch_taken_0x2c3854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3854u;
        // 0x2c3858: 0xa6020070  sh          $v0, 0x70($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 112), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3854) {
            ctx->pc = 0x2C3874u;
            goto label_2c3874;
        }
    }
    ctx->pc = 0x2C385Cu;
    // 0x2c385c: 0x0  nop
    ctx->pc = 0x2c385cu;
    // NOP
label_2c3860:
    // 0x2c3860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3864: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3864u;
    {
        const bool branch_taken_0x2c3864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3864u;
        // 0x2c3868: 0xa6020070  sh          $v0, 0x70($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 112), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3864) {
            ctx->pc = 0x2C3874u;
            goto label_2c3874;
        }
    }
    ctx->pc = 0x2C386Cu;
    // 0x2c386c: 0x0  nop
    ctx->pc = 0x2c386cu;
    // NOP
label_2c3870:
    // 0x2c3870: 0xa6000070  sh          $zero, 0x70($s0)
    ctx->pc = 0x2c3870u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 112), (uint16_t)GPR_U32(ctx, 0));
label_2c3874:
    // 0x2c3874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3878: 0xa606006c  sh          $a2, 0x6C($s0)
    ctx->pc = 0x2c3878u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 6));
    // 0x2c387c: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x2c387cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x2c3880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3884: 0xc0849c0  jal         func_212700
    ctx->pc = 0x2C3884u;
    SET_GPR_U32(ctx, 31, 0x2C388Cu);
    ctx->pc = 0x2C3888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3884u;
    // 0x2c3888: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x2C3884u, 0x2C388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C388Cu;
label_2c388c:
    // 0x2c388c: 0xc0849c0  jal         func_212700
    ctx->pc = 0x2C388Cu;
    SET_GPR_U32(ctx, 31, 0x2C3894u);
    ctx->pc = 0x2C3890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C388Cu;
    // 0x2c3890: 0x26240720  addiu       $a0, $s1, 0x720 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x2C388Cu, 0x2C3894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3894u;
label_2c3894:
    // 0x2c3894: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2c3894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3898: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2c3898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c389c: 0xe6200750  swc1        $f0, 0x750($s1)
    ctx->pc = 0x2c389cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1872), bits); }
    // 0x2c38a0: 0xe6210758  swc1        $f1, 0x758($s1)
    ctx->pc = 0x2c38a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1880), bits); }
    // 0x2c38a4: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2c38a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2c38a8: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x2c38a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x2c38ac: 0x96020070  lhu         $v0, 0x70($s0)
    ctx->pc = 0x2c38acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2c38b0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C38B0u;
    {
        const bool branch_taken_0x2c38b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c38b0) {
            ctx->pc = 0x2C38B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C38B0u;
            // 0x2c38b4: 0xae000080  sw          $zero, 0x80($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C38E4u;
            goto label_2c38e4;
        }
    }
    ctx->pc = 0x2C38B8u;
    // 0x2c38b8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2c38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2c38bc: 0x0  nop
    ctx->pc = 0x2c38bcu;
    // NOP
label_2c38c0:
    // 0x2c38c0: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x2c38c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2c38c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c38c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2c38c8: 0xc0849c0  jal         func_212700
    ctx->pc = 0x2C38C8u;
    SET_GPR_U32(ctx, 31, 0x2C38D0u);
    ctx->pc = 0x2C38CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C38C8u;
    // 0x2c38cc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x2C38C8u, 0x2C38D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C38D0u;
label_2c38d0:
    // 0x2c38d0: 0x96020070  lhu         $v0, 0x70($s0)
    ctx->pc = 0x2c38d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2c38d4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2c38d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c38d8: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C38D8u;
    {
        const bool branch_taken_0x2c38d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c38d8) {
            ctx->pc = 0x2C38DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C38D8u;
            // 0x2c38dc: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C38C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c38c0;
        }
    }
    ctx->pc = 0x2C38E0u;
    // 0x2c38e0: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2c38e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_2c38e4:
    // 0x2c38e4: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x2c38e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x2c38e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c38e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c38ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c38ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c38f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c38f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c38f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2c38f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c38f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C38F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C38FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38F8u;
        // 0x2c38fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C38F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3900u;
}
