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

// Function: sub_00219F50
// Address: 0x219f50 - 0x21a088
void sub_00219F50_0x219f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219F50_0x219f50");
#endif

    switch (ctx->pc) {
        case 0x219fa8u: goto label_219fa8;
        case 0x219fccu: goto label_219fcc;
        case 0x219ff0u: goto label_219ff0;
        case 0x21a010u: goto label_21a010;
        case 0x21a030u: goto label_21a030;
        default: break;
    }

    ctx->pc = 0x219f50u;

    // 0x219f50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x219f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x219f54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x219f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x219f58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x219f58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219f60: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x219f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x219f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x219f68: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x219f68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x219f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x219f70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x219f70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f74: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x219f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x219f78: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x219f78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f7c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x219f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x219f80: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x219f80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f84: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x219f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x219f88: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x219f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x219f8c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x219f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x219f90: 0x1a600030  blez        $s3, . + 4 + (0x30 << 2)
    ctx->pc = 0x219F90u;
    {
        const bool branch_taken_0x219f90 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x219F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F90u;
        // 0x219f94: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f90) {
            ctx->pc = 0x21A054u;
            goto label_21a054;
        }
    }
    ctx->pc = 0x219F98u;
    // 0x219f98: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x219f98u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x219f9c: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x219f9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x219fa0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x219fa0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219fa4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x219fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_219fa8:
    // 0x219fa8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x219fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x219fac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x219facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x219fb0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x219fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x219fb4: 0x50820024  beql        $a0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x219FB4u;
    {
        const bool branch_taken_0x219fb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x219fb4) {
            ctx->pc = 0x219FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219FB4u;
            // 0x219fb8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A048u;
            goto label_21a048;
        }
    }
    ctx->pc = 0x219FBCu;
    // 0x219fbc: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x219FBCu;
    {
        const bool branch_taken_0x219fbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x219fbc) {
            ctx->pc = 0x219FE0u;
            goto label_219fe0;
        }
    }
    ctx->pc = 0x219FC4u;
    // 0x219fc4: 0xc086304  jal         func_218C10
    ctx->pc = 0x219FC4u;
    SET_GPR_U32(ctx, 31, 0x219FCCu);
    ctx->pc = 0x218C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C10u, 0x219FC4u, 0x219FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219FCCu;
label_219fcc:
    // 0x219fcc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x219FCCu;
    {
        const bool branch_taken_0x219fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FCCu;
        // 0x219fd0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219fcc) {
            ctx->pc = 0x21A038u;
            goto label_21a038;
        }
    }
    ctx->pc = 0x219FD4u;
    // 0x219fd4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x219FD4u;
    {
        const bool branch_taken_0x219fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FD4u;
        // 0x219fd8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219fd4) {
            ctx->pc = 0x21A048u;
            goto label_21a048;
        }
    }
    ctx->pc = 0x219FDCu;
    // 0x219fdc: 0x0  nop
    ctx->pc = 0x219fdcu;
    // NOP
label_219fe0:
    // 0x219fe0: 0x161e0007  bne         $s0, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x219FE0u;
    {
        const bool branch_taken_0x219fe0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 30));
        if (branch_taken_0x219fe0) {
            ctx->pc = 0x21A000u;
            goto label_21a000;
        }
    }
    ctx->pc = 0x219FE8u;
    // 0x219fe8: 0xc087604  jal         func_21D810
    ctx->pc = 0x219FE8u;
    SET_GPR_U32(ctx, 31, 0x219FF0u);
    ctx->pc = 0x21D810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D810u, 0x219FE8u, 0x219FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219FF0u;
label_219ff0:
    // 0x219ff0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x219FF0u;
    {
        const bool branch_taken_0x219ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FF0u;
        // 0x219ff4: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ff0) {
            ctx->pc = 0x21A038u;
            goto label_21a038;
        }
    }
    ctx->pc = 0x219FF8u;
    // 0x219ff8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x219FF8u;
    {
        const bool branch_taken_0x219ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FF8u;
        // 0x219ffc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ff8) {
            ctx->pc = 0x21A048u;
            goto label_21a048;
        }
    }
    ctx->pc = 0x21A000u;
label_21a000:
    // 0x21a000: 0x16170007  bne         $s0, $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x21A000u;
    {
        const bool branch_taken_0x21a000 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 23));
        if (branch_taken_0x21a000) {
            ctx->pc = 0x21A020u;
            goto label_21a020;
        }
    }
    ctx->pc = 0x21A008u;
    // 0x21a008: 0xc0875f6  jal         func_21D7D8
    ctx->pc = 0x21A008u;
    SET_GPR_U32(ctx, 31, 0x21A010u);
    ctx->pc = 0x21D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D7D8u, 0x21A008u, 0x21A010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A010u;
label_21a010:
    // 0x21a010: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21A010u;
    {
        const bool branch_taken_0x21a010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A010u;
        // 0x21a014: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a010) {
            ctx->pc = 0x21A038u;
            goto label_21a038;
        }
    }
    ctx->pc = 0x21A018u;
    // 0x21a018: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x21A018u;
    {
        const bool branch_taken_0x21a018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A018u;
        // 0x21a01c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a018) {
            ctx->pc = 0x21A048u;
            goto label_21a048;
        }
    }
    ctx->pc = 0x21A020u;
label_21a020:
    // 0x21a020: 0x16160005  bne         $s0, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A020u;
    {
        const bool branch_taken_0x21a020 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x21A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A020u;
        // 0x21a024: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a020) {
            ctx->pc = 0x21A038u;
            goto label_21a038;
        }
    }
    ctx->pc = 0x21A028u;
    // 0x21a028: 0xc0875e8  jal         func_21D7A0
    ctx->pc = 0x21A028u;
    SET_GPR_U32(ctx, 31, 0x21A030u);
    ctx->pc = 0x21D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D7A0u, 0x21A028u, 0x21A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A030u;
label_21a030:
    // 0x21a030: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A030u;
    {
        const bool branch_taken_0x21a030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A030u;
        // 0x21a034: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a030) {
            ctx->pc = 0x21A044u;
            goto label_21a044;
        }
    }
    ctx->pc = 0x21A038u;
label_21a038:
    // 0x21a038: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21a038u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21a03c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x21a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21a040: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x21a040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_21a044:
    // 0x21a044: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21a044u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21a048:
    // 0x21a048: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x21a048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x21a04c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x21A04Cu;
    {
        const bool branch_taken_0x21a04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A04Cu;
        // 0x21a050: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a04c) {
            ctx->pc = 0x219FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219fa8;
        }
    }
    ctx->pc = 0x21A054u;
label_21a054:
    // 0x21a054: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x21a054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a05c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21a05cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a060: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21a060u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a064: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21a064u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21a068: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21a068u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a06c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x21a06cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21a070: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x21a070u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a074: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x21a074u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21a078: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x21a078u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21a07c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x21a07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21a080: 0x3e00008  jr          $ra
    ctx->pc = 0x21A080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A080u;
        // 0x21a084: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A088u;
}
