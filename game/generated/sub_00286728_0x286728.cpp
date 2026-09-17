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

// Function: sub_00286728
// Address: 0x286728 - 0x286838
void sub_00286728_0x286728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286728_0x286728");
#endif

    switch (ctx->pc) {
        case 0x28678cu: goto label_28678c;
        case 0x2867acu: goto label_2867ac;
        case 0x2867e4u: goto label_2867e4;
        case 0x286808u: goto label_286808;
        case 0x286818u: goto label_286818;
        default: break;
    }

    ctx->pc = 0x286728u;

    // 0x286728: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x286728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28672c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28672cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286730: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x286730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286734: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x286734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x286738: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x286738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28673c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28673cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x286740: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x286740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x286744: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x286744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x286748: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x286748u;
    {
        const bool branch_taken_0x286748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286748u;
        // 0x28674c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286748) {
            ctx->pc = 0x2867C0u;
            goto label_2867c0;
        }
    }
    ctx->pc = 0x286750u;
    // 0x286750: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x286750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x286754: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x286754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x286758: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x286758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28675c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x28675cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x286760: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x286760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x286764: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x286764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x286768: 0x24925b08  addiu       $s2, $a0, 0x5B08
    ctx->pc = 0x286768u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 23304));
    // 0x28676c: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x28676cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x286770: 0x26110034  addiu       $s1, $s0, 0x34
    ctx->pc = 0x286770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x286774: 0x7c2021  addu        $a0, $v1, $gp
    ctx->pc = 0x286774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x286778: 0x8c84b318  lw          $a0, -0x4CE8($a0)
    ctx->pc = 0x286778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947608)));
    // 0x28677c: 0x24c65ee0  addiu       $a2, $a2, 0x5EE0
    ctx->pc = 0x28677cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24288));
    // 0x286780: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x286780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286784: 0xc0d46b6  jal         func_351AD8
    ctx->pc = 0x286784u;
    SET_GPR_U32(ctx, 31, 0x28678Cu);
    ctx->pc = 0x286788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286784u;
    // 0x286788: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351AD8u, 0x286784u, 0x28678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28678Cu;
label_28678c:
    // 0x28678c: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x28678Cu;
    {
        const bool branch_taken_0x28678c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28678c) {
            ctx->pc = 0x286790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28678Cu;
            // 0x286790: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28681Cu;
            goto label_28681c;
        }
    }
    ctx->pc = 0x286794u;
    // 0x286794: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x286794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x286798: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x286798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28679c: 0x5c2021  addu        $a0, $v0, $gp
    ctx->pc = 0x28679cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x2867a0: 0x8c84b318  lw          $a0, -0x4CE8($a0)
    ctx->pc = 0x2867a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947608)));
    // 0x2867a4: 0xc0d506c  jal         func_3541B0
    ctx->pc = 0x2867A4u;
    SET_GPR_U32(ctx, 31, 0x2867ACu);
    ctx->pc = 0x2867A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2867A4u;
    // 0x2867a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3541B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3541B0u, 0x2867A4u, 0x2867ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2867ACu;
label_2867ac:
    // 0x2867ac: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2867ACu;
    {
        const bool branch_taken_0x2867ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2867ac) {
            ctx->pc = 0x2867B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2867ACu;
            // 0x2867b0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286818u;
            goto label_286818;
        }
    }
    ctx->pc = 0x2867B4u;
    // 0x2867b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2867B4u;
    {
        const bool branch_taken_0x2867b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2867B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867B4u;
        // 0x2867b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867b4) {
            ctx->pc = 0x2867DCu;
            goto label_2867dc;
        }
    }
    ctx->pc = 0x2867BCu;
    // 0x2867bc: 0x0  nop
    ctx->pc = 0x2867bcu;
    // NOP
label_2867c0:
    // 0x2867c0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2867c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2867c4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x2867c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2867c8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2867c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2867cc: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2867CCu;
    {
        const bool branch_taken_0x2867cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2867D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867CCu;
        // 0x2867d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867cc) {
            ctx->pc = 0x28681Cu;
            goto label_28681c;
        }
    }
    ctx->pc = 0x2867D4u;
    // 0x2867d4: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2867D4u;
    {
        const bool branch_taken_0x2867d4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2867D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867D4u;
        // 0x2867d8: 0x3c030017  lui         $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867d4) {
            ctx->pc = 0x2867F0u;
            goto label_2867f0;
        }
    }
    ctx->pc = 0x2867DCu;
label_2867dc:
    // 0x2867dc: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x2867DCu;
    SET_GPR_U32(ctx, 31, 0x2867E4u);
    ctx->pc = 0x2867E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2867DCu;
    // 0x2867e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x2867DCu, 0x2867E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2867E4u;
label_2867e4:
    // 0x2867e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2867E4u;
    {
        const bool branch_taken_0x2867e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2867E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867E4u;
        // 0x2867e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867e4) {
            ctx->pc = 0x28681Cu;
            goto label_28681c;
        }
    }
    ctx->pc = 0x2867ECu;
    // 0x2867ec: 0x0  nop
    ctx->pc = 0x2867ecu;
    // NOP
label_2867f0:
    // 0x2867f0: 0x8c625b08  lw          $v0, 0x5B08($v1)
    ctx->pc = 0x2867f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23304)));
    // 0x2867f4: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x2867f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2867f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2867F8u;
    {
        const bool branch_taken_0x2867f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2867f8) {
            ctx->pc = 0x286810u;
            goto label_286810;
        }
    }
    ctx->pc = 0x286800u;
    // 0x286800: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x286800u;
    SET_GPR_U32(ctx, 31, 0x286808u);
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x286800u, 0x286808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286808u;
label_286808:
    // 0x286808: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x286808u;
    {
        const bool branch_taken_0x286808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286808u;
        // 0x28680c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286808) {
            ctx->pc = 0x28681Cu;
            goto label_28681c;
        }
    }
    ctx->pc = 0x286810u;
label_286810:
    // 0x286810: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x286810u;
    SET_GPR_U32(ctx, 31, 0x286818u);
    ctx->pc = 0x286814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286810u;
    // 0x286814: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x286810u, 0x286818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286818u;
label_286818:
    // 0x286818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28681c:
    // 0x28681c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28681cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x286820: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x286820u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286824: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x286824u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x286828: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x286828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28682c: 0x3e00008  jr          $ra
    ctx->pc = 0x28682Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28682Cu;
        // 0x286830: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28682Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286834u;
    // 0x286834: 0x0  nop
    ctx->pc = 0x286834u;
    // NOP
    ctx->pc = 0x286838u;
}
