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

// Function: sub_0012F230
// Address: 0x12f230 - 0x12f330
void sub_0012F230_0x12f230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F230_0x12f230");
#endif

    switch (ctx->pc) {
        case 0x12f274u: goto label_12f274;
        case 0x12f29cu: goto label_12f29c;
        case 0x12f2b0u: goto label_12f2b0;
        case 0x12f2c8u: goto label_12f2c8;
        case 0x12f2f4u: goto label_12f2f4;
        case 0x12f304u: goto label_12f304;
        default: break;
    }

    ctx->pc = 0x12f230u;

    // 0x12f230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12f230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12f234: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12f234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12f238: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12f238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f23c: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x12f23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x12f240: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12f240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12f244: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12f244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12f248: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12f248u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f24c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12f24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12f250: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12f250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f254: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12F254u;
    {
        const bool branch_taken_0x12f254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F254u;
        // 0x12f258: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f254) {
            ctx->pc = 0x12F278u;
            goto label_12f278;
        }
    }
    ctx->pc = 0x12F25Cu;
    // 0x12f25c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12f260: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x12f260u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x12f264: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x12f264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12f268: 0x8cc6f97c  lw          $a2, -0x684($a2)
    ctx->pc = 0x12f268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294965628)));
    // 0x12f26c: 0xc04bb1c  jal         func_12EC70
    ctx->pc = 0x12F26Cu;
    SET_GPR_U32(ctx, 31, 0x12F274u);
    ctx->pc = 0x12F270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F26Cu;
    // 0x12f270: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC70u, 0x12F26Cu, 0x12F274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F274u;
label_12f274:
    // 0x12f274: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12f274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f278:
    // 0x12f278: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x12f278u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x12f27c: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x12F27Cu;
    {
        const bool branch_taken_0x12f27c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F27Cu;
        // 0x12f280: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f27c) {
            ctx->pc = 0x12F310u;
            goto label_12f310;
        }
    }
    ctx->pc = 0x12F284u;
    // 0x12f284: 0x8e700048  lw          $s0, 0x48($s3)
    ctx->pc = 0x12f284u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x12f288: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x12F288u;
    {
        const bool branch_taken_0x12f288 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F288u;
        // 0x12f28c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f288) {
            ctx->pc = 0x12F2DCu;
            goto label_12f2dc;
        }
    }
    ctx->pc = 0x12F290u;
    // 0x12f290: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12f290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f294: 0xc04bbfa  jal         func_12EFE8
    ctx->pc = 0x12F294u;
    SET_GPR_U32(ctx, 31, 0x12F29Cu);
    ctx->pc = 0x12F298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F294u;
    // 0x12f298: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFE8u, 0x12F294u, 0x12F29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F29Cu;
label_12f29c:
    // 0x12f29c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12f29cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2a0: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x12f2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x12f2a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12F2A4u;
    {
        const bool branch_taken_0x12f2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2A4u;
        // 0x12f2a8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2a4) {
            ctx->pc = 0x12F2D8u;
            goto label_12f2d8;
        }
    }
    ctx->pc = 0x12F2ACu;
    // 0x12f2ac: 0x0  nop
    ctx->pc = 0x12f2acu;
    // NOP
label_12f2b0:
    // 0x12f2b0: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x12F2B0u;
    {
        const bool branch_taken_0x12f2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f2b0) {
            ctx->pc = 0x12F2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F2B0u;
            // 0x12f2b4: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F2D8u;
            goto label_12f2d8;
        }
    }
    ctx->pc = 0x12F2B8u;
    // 0x12f2b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12f2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12f2bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2c0: 0xc04bc08  jal         func_12F020
    ctx->pc = 0x12F2C0u;
    SET_GPR_U32(ctx, 31, 0x12F2C8u);
    ctx->pc = 0x12F2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F2C0u;
    // 0x12f2c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F020u, 0x12F2C0u, 0x12F2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F2C8u;
label_12f2c8:
    // 0x12f2c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12f2c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x12f2d0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x12f2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x12f2d4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x12f2d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_12f2d8:
    // 0x12f2d8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x12f2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_12f2dc:
    // 0x12f2dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12F2DCu;
    {
        const bool branch_taken_0x12f2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2DCu;
        // 0x12f2e0: 0x118843  sra         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2dc) {
            ctx->pc = 0x12F304u;
            goto label_12f304;
        }
    }
    ctx->pc = 0x12F2E4u;
    // 0x12f2e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12f2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12f2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2ec: 0xc04bc08  jal         func_12F020
    ctx->pc = 0x12F2ECu;
    SET_GPR_U32(ctx, 31, 0x12F2F4u);
    ctx->pc = 0x12F2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F2ECu;
    // 0x12f2f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F020u, 0x12F2ECu, 0x12F2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F2F4u;
label_12f2f4:
    // 0x12f2f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12f2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12f2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2fc: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12F2FCu;
    SET_GPR_U32(ctx, 31, 0x12F304u);
    ctx->pc = 0x12F300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F2FCu;
    // 0x12f300: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12F2FCu, 0x12F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F304u;
label_12f304:
    // 0x12f304: 0x5620ffea  bnel        $s1, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x12F304u;
    {
        const bool branch_taken_0x12f304 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f304) {
            ctx->pc = 0x12F308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F304u;
            // 0x12f308: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f2b0;
        }
    }
    ctx->pc = 0x12F30Cu;
    // 0x12f30c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x12f30cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12f310:
    // 0x12f310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12f310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f314: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12f314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12f318: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12f318u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f31c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12f31cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12f320: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12f320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f324: 0x3e00008  jr          $ra
    ctx->pc = 0x12F324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F324u;
        // 0x12f328: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F32Cu;
    // 0x12f32c: 0x0  nop
    ctx->pc = 0x12f32cu;
    // NOP
    ctx->pc = 0x12f330u;
}
