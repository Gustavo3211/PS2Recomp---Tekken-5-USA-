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

// Function: sub_0032C368
// Address: 0x32c368 - 0x32c4c0
void sub_0032C368_0x32c368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C368_0x32c368");
#endif

    switch (ctx->pc) {
        case 0x32c3f0u: goto label_32c3f0;
        default: break;
    }

    ctx->pc = 0x32c368u;

    // 0x32c368: 0x24a7fff0  addiu       $a3, $a1, -0x10
    ctx->pc = 0x32c368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x32c36c: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x32c36cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x32c370: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x32c370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32c374: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x32c374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32c378: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x32c378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x32c37c: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x32c37cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x32c380: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x32c380u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32c384: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x32c384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x32c388: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x32c388u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x32c38c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x32c38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32c390: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x32c390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x32c394: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x32c394u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x32c398: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x32c398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x32c39c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32c3a0: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x32c3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x32c3a4: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x32c3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x32c3a8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x32c3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x32c3ac: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x32c3acu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x32c3b0: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x32c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x32c3b4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x32c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x32c3b8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x32c3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x32c3bc: 0x5064001a  beql        $v1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x32C3BCu;
    {
        const bool branch_taken_0x32c3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x32c3bc) {
            ctx->pc = 0x32C3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C3BCu;
            // 0x32c3c0: 0x8d450000  lw          $a1, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C428u;
            goto label_32c428;
        }
    }
    ctx->pc = 0x32C3C4u;
    // 0x32c3c4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x32c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x32c3c8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x32c3c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x32c3cc: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x32C3CCu;
    {
        const bool branch_taken_0x32c3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c3cc) {
            ctx->pc = 0x32C3D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C3CCu;
            // 0x32c3d0: 0x8d450000  lw          $a1, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C428u;
            goto label_32c428;
        }
    }
    ctx->pc = 0x32C3D4u;
    // 0x32c3d4: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x32c3d4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c3d8: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x32c3d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x32c3dc: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x32c3dcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c3e0: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x32c3e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c3e4: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x32c3e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c3e8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x32c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32c3ec: 0x0  nop
    ctx->pc = 0x32c3ecu;
    // NOP
label_32c3f0:
    // 0x32c3f0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x32c3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x32c3f4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x32c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32c3f8: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x32c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x32c3fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32c400: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x32c400u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x32c404: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32c404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c408: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x32c408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x32c40c: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32C40Cu;
    {
        const bool branch_taken_0x32c40c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x32C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C40Cu;
        // 0x32c410: 0xada30000  sw          $v1, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c40c) {
            ctx->pc = 0x32C424u;
            goto label_32c424;
        }
    }
    ctx->pc = 0x32C414u;
    // 0x32c414: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x32c414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x32c418: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x32c418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x32c41c: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x32C41Cu;
    {
        const bool branch_taken_0x32c41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c41c) {
            ctx->pc = 0x32C420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C41Cu;
            // 0x32c420: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32c3f0;
        }
    }
    ctx->pc = 0x32C424u;
label_32c424:
    // 0x32c424: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x32c424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_32c428:
    // 0x32c428: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x32c428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x32c42c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x32c42cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x32c430: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x32c430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x32c434: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x32c434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x32c438: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x32c438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x32c43c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32c43cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x32c440: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x32c440u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x32c444: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x32c444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x32c448: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x32c448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32c44c: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x32c44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x32c450: 0x54a3000c  bnel        $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x32C450u;
    {
        const bool branch_taken_0x32c450 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x32c450) {
            ctx->pc = 0x32C454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C450u;
            // 0x32c454: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C484u;
            goto label_32c484;
        }
    }
    ctx->pc = 0x32C458u;
    // 0x32c458: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x32c458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x32c45c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x32c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32c460: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32c460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32c464: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x32c464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x32c468: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x32c468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32c46c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x32c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x32c470: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x32c470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x32c474: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x32c474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x32c478: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32c478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32c47c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x32c47cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x32c480: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x32c480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_32c484:
    // 0x32c484: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x32c484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x32c488: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x32c488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x32c48c: 0x1487000a  bne         $a0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x32C48Cu;
    {
        const bool branch_taken_0x32c48c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x32c48c) {
            ctx->pc = 0x32C4B8u;
            goto label_32c4b8;
        }
    }
    ctx->pc = 0x32C494u;
    // 0x32c494: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32c494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32c498: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x32c498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x32c49c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x32c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32c4a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x32c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32c4a4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x32c4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x32c4a8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x32c4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32c4ac: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x32c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x32c4b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32c4b4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x32c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_32c4b8:
    // 0x32c4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x32C4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C4B8u;
        // 0x32c4bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C4C0u;
}
