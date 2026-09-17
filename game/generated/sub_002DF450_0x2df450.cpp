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

// Function: sub_002DF450
// Address: 0x2df450 - 0x2df550
void sub_002DF450_0x2df450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF450_0x2df450");
#endif

    switch (ctx->pc) {
        case 0x2df480u: goto label_2df480;
        case 0x2df4c8u: goto label_2df4c8;
        case 0x2df4d8u: goto label_2df4d8;
        case 0x2df510u: goto label_2df510;
        default: break;
    }

    ctx->pc = 0x2df450u;

    // 0x2df450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2df450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2df454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2df454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2df458: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2df458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df45c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2df45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2df460: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2df460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df464: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2df464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2df468: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2df468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2df46c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2df46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2df470: 0x10b1000e  beq         $a1, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2DF470u;
    {
        const bool branch_taken_0x2df470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x2DF474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF470u;
        // 0x2df474: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df470) {
            ctx->pc = 0x2DF4ACu;
            goto label_2df4ac;
        }
    }
    ctx->pc = 0x2DF478u;
    // 0x2df478: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x2df478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2df47c: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x2df47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_2df480:
    // 0x2df480: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2df480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2df484: 0xc4a00044  lwc1        $f0, 0x44($a1)
    ctx->pc = 0x2df484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df488: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x2df488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2df48c: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x2df48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2df490: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2df490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2df494: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2df494u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2df498: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2df498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2df49c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2df49cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2df4a0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2df4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2df4a4: 0x14b1fff6  bne         $a1, $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2DF4A4u;
    {
        const bool branch_taken_0x2df4a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x2DF4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4A4u;
        // 0x2df4a8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df4a4) {
            ctx->pc = 0x2DF480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2df480;
        }
    }
    ctx->pc = 0x2DF4ACu;
label_2df4ac:
    // 0x2df4ac: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2df4acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2df4b0: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2DF4B0u;
    {
        const bool branch_taken_0x2df4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df4b0) {
            ctx->pc = 0x2DF4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF4B0u;
            // 0x2df4b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF538u;
            goto label_2df538;
        }
    }
    ctx->pc = 0x2DF4B8u;
    // 0x2df4b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2df4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df4bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2df4bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df4c0: 0xc0935d8  jal         func_24D760
    ctx->pc = 0x2DF4C0u;
    SET_GPR_U32(ctx, 31, 0x2DF4C8u);
    ctx->pc = 0x2DF4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF4C0u;
    // 0x2df4c4: 0x2644012c  addiu       $a0, $s2, 0x12C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D760u, 0x2DF4C0u, 0x2DF4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF4C8u;
label_2df4c8:
    // 0x2df4c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2df4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df4cc: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DF4CCu;
    {
        const bool branch_taken_0x2df4cc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2DF4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4CCu;
        // 0x2df4d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df4cc) {
            ctx->pc = 0x2DF4FCu;
            goto label_2df4fc;
        }
    }
    ctx->pc = 0x2DF4D4u;
    // 0x2df4d4: 0x2647000c  addiu       $a3, $s2, 0xC
    ctx->pc = 0x2df4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_2df4d8:
    // 0x2df4d8: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x2df4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2df4dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2df4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2df4e0: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x2df4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2df4e4: 0xd0202a  slt         $a0, $a2, $s0
    ctx->pc = 0x2df4e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2df4e8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2df4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2df4ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2df4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2df4f0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2df4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2df4f4: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DF4F4u;
    {
        const bool branch_taken_0x2df4f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4F4u;
        // 0x2df4f8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df4f4) {
            ctx->pc = 0x2DF4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2df4d8;
        }
    }
    ctx->pc = 0x2DF4FCu;
label_2df4fc:
    // 0x2df4fc: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x2df4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2df500: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x2df500u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
    // 0x2df504: 0x4c0000a  bltz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2DF504u;
    {
        const bool branch_taken_0x2df504 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2DF508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF504u;
        // 0x2df508: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df504) {
            ctx->pc = 0x2DF530u;
            goto label_2df530;
        }
    }
    ctx->pc = 0x2DF50Cu;
    // 0x2df50c: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x2df50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_2df510:
    // 0x2df510: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2df510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2df514: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2df514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2df518: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x2df518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2df51c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2df51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2df520: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2df520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2df524: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2df524u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2df528: 0x4c1fff9  bgez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2DF528u;
    {
        const bool branch_taken_0x2df528 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2DF52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF528u;
        // 0x2df52c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df528) {
            ctx->pc = 0x2DF510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2df510;
        }
    }
    ctx->pc = 0x2DF530u;
label_2df530:
    // 0x2df530: 0xacb10004  sw          $s1, 0x4($a1)
    ctx->pc = 0x2df530u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
    // 0x2df534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2df534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2df538:
    // 0x2df538: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2df538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2df53c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2df53cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df540: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2df540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df544: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF544u;
        // 0x2df548: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF54Cu;
    // 0x2df54c: 0x0  nop
    ctx->pc = 0x2df54cu;
    // NOP
    ctx->pc = 0x2df550u;
}
