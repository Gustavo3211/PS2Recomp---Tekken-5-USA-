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

// Function: sub_0035B398
// Address: 0x35b398 - 0x35b480
void sub_0035B398_0x35b398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B398_0x35b398");
#endif

    switch (ctx->pc) {
        case 0x35b3e8u: goto label_35b3e8;
        case 0x35b418u: goto label_35b418;
        case 0x35b430u: goto label_35b430;
        default: break;
    }

    ctx->pc = 0x35b398u;

    // 0x35b398: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35b398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35b39c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35b3a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35b3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35b3a4: 0x24421320  addiu       $v0, $v0, 0x1320
    ctx->pc = 0x35b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4896));
    // 0x35b3a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x35b3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x35b3ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35b3acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b3b0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x35b3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x35b3b4: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x35b3b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x35b3b8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x35b3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x35b3bc: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x35b3bcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
    // 0x35b3c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35b3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x35b3c4: 0x2612000c  addiu       $s2, $s0, 0xC
    ctx->pc = 0x35b3c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x35b3c8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x35b3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x35b3cc: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x35b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D1338u));
    // 0x35b3d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x35b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1D1320u));
    // 0x35b3d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35b3d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35b3dc: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x35b3dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35b3e0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x35b3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x35b3e4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x35b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_35b3e8:
    // 0x35b3e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35b3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b3ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b3f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35b3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b3f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35b3f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x35b3f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b3fc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x35b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x35b400: 0x24081000  addiu       $t0, $zero, 0x1000
    ctx->pc = 0x35b400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x35b404: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x35b404u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b408: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x35b408u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x35b40c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x35b40cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b410: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x35B410u;
    SET_GPR_U32(ctx, 31, 0x35B418u);
    ctx->pc = 0x35B414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B410u;
    // 0x35b414: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x35B410u, 0x35B418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B418u;
label_35b418:
    // 0x35b418: 0x26845338  addiu       $a0, $s4, 0x5338
    ctx->pc = 0x35b418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 21304));
    // 0x35b41c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35b41cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b420: 0x4c10005  bgez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x35B420u;
    {
        const bool branch_taken_0x35b420 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x35B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B420u;
        // 0x35b424: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b420) {
            ctx->pc = 0x35B438u;
            goto label_35b438;
        }
    }
    ctx->pc = 0x35B428u;
    // 0x35b428: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35B428u;
    SET_GPR_U32(ctx, 31, 0x35B430u);
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35B428u, 0x35B430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B430u;
label_35b430:
    // 0x35b430: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x35B430u;
    {
        const bool branch_taken_0x35b430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B430u;
        // 0x35b434: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b430) {
            ctx->pc = 0x35B3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b3e8;
        }
    }
    ctx->pc = 0x35B438u;
label_35b438:
    // 0x35b438: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x35b438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x35b43c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b440: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x35b440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35b444: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x35b444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x35b448: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x35b448u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35b44c: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x35b44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x35b450: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x35b450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x35b454: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x35b454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b458: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x35b458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x35b45c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35b45cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b460: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x35b460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b464: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x35b464u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b468: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x35b468u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35b46c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x35b46cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35b470: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x35b470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b474: 0x3e00008  jr          $ra
    ctx->pc = 0x35B474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B474u;
        // 0x35b478: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B47Cu;
    // 0x35b47c: 0x0  nop
    ctx->pc = 0x35b47cu;
    // NOP
    ctx->pc = 0x35b480u;
}
