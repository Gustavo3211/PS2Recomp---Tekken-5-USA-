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

// Function: sub_0034B6C4
// Address: 0x34b6c4 - 0x34b838
void sub_0034B6C4_0x34b6c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B6C4_0x34b6c4");
#endif

    switch (ctx->pc) {
        case 0x34b6f4u: goto label_34b6f4;
        case 0x34b70cu: goto label_34b70c;
        case 0x34b754u: goto label_34b754;
        case 0x34b798u: goto label_34b798;
        case 0x34b7b8u: goto label_34b7b8;
        case 0x34b7ecu: goto label_34b7ec;
        default: break;
    }

    ctx->pc = 0x34b6c4u;

    // 0x34b6c4: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34b6c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x34b6c8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x34b6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x34b6cc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x34b6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x34b6d0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34b6d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b6d4: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34b6d8: 0x2442b180  addiu       $v0, $v0, -0x4E80
    ctx->pc = 0x34b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947200));
    // 0x34b6dc: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x34b6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
    // 0x34b6e0: 0x8fc40040  lw          $a0, 0x40($fp)
    ctx->pc = 0x34b6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x34b6e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34b6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b6e8: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x34b6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x34b6ec: 0xc04a151  jal         func_128544
    ctx->pc = 0x34B6ECu;
    SET_GPR_U32(ctx, 31, 0x34B6F4u);
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x34B6ECu, 0x34B6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B6F4u;
label_34b6f4:
    // 0x34b6f4: 0x8fc20040  lw          $v0, 0x40($fp)
    ctx->pc = 0x34b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x34b6f8: 0x2442008b  addiu       $v0, $v0, 0x8B
    ctx->pc = 0x34b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 139));
    // 0x34b6fc: 0x8fc40040  lw          $a0, 0x40($fp)
    ctx->pc = 0x34b6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x34b700: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34b700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b704: 0xc043f26  jal         func_10FC98
    ctx->pc = 0x34B704u;
    SET_GPR_U32(ctx, 31, 0x34B70Cu);
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x34B704u, 0x34B70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B70Cu;
label_34b70c:
    // 0x34b70c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x34b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x34b710: 0x2442b970  addiu       $v0, $v0, -0x4690
    ctx->pc = 0x34b710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949232));
    // 0x34b714: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34b714u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34b718: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34b718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34b71c: 0x2442a900  addiu       $v0, $v0, -0x5700
    ctx->pc = 0x34b71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945024));
    // 0x34b720: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34b720u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x34b724: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x34b724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x34b728: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34b728u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34b72c: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x34b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x34b730: 0x24428870  addiu       $v0, $v0, -0x7790
    ctx->pc = 0x34b730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936688));
    // 0x34b734: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x34b734u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x34b738: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x34b738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34b73c: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34b73cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34b740: 0xafc00030  sw          $zero, 0x30($fp)
    ctx->pc = 0x34b740u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 0));
    // 0x34b744: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34b744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x34b748: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34b748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b74c: 0xc043c68  jal         func_10F1A0
    ctx->pc = 0x34B74Cu;
    SET_GPR_U32(ctx, 31, 0x34B754u);
    ctx->pc = 0x10F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1A0u, 0x34B74Cu, 0x34B754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B754u;
label_34b754:
    // 0x34b754: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x34b754u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x34b758: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34b758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34b75c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34B75Cu;
    {
        const bool branch_taken_0x34b75c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34b75c) {
            ctx->pc = 0x34B76Cu;
            goto label_34b76c;
        }
    }
    ctx->pc = 0x34B764u;
    // 0x34b764: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x34B764u;
    {
        const bool branch_taken_0x34b764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b764) {
            ctx->pc = 0x34B820u;
            goto label_34b820;
        }
    }
    ctx->pc = 0x34B76Cu;
label_34b76c:
    // 0x34b76c: 0x8fc30040  lw          $v1, 0x40($fp)
    ctx->pc = 0x34b76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x34b770: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34b770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34b774: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34b774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34b778: 0x8fc30040  lw          $v1, 0x40($fp)
    ctx->pc = 0x34b778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x34b77c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b780: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34b780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x34b784: 0x8fc20040  lw          $v0, 0x40($fp)
    ctx->pc = 0x34b784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x34b788: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34b788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34b78c: 0x8fc50040  lw          $a1, 0x40($fp)
    ctx->pc = 0x34b78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x34b790: 0xc044138  jal         func_1104E0
    ctx->pc = 0x34B790u;
    SET_GPR_U32(ctx, 31, 0x34B798u);
    ctx->pc = 0x1104E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1104E0u, 0x34B790u, 0x34B798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B798u;
label_34b798:
    // 0x34b798: 0x8fc20040  lw          $v0, 0x40($fp)
    ctx->pc = 0x34b798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x34b79c: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x34b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x34b7a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34b7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b7a4: 0x3c054e55  lui         $a1, 0x4E55
    ctx->pc = 0x34b7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20053 << 16));
    // 0x34b7a8: 0x34a54649  ori         $a1, $a1, 0x4649
    ctx->pc = 0x34b7a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17993);
    // 0x34b7ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34b7acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b7b0: 0xc044bb4  jal         func_112ED0
    ctx->pc = 0x34B7B0u;
    SET_GPR_U32(ctx, 31, 0x34B7B8u);
    ctx->pc = 0x112ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112ED0u, 0x34B7B0u, 0x34B7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B7B8u;
label_34b7b8:
    // 0x34b7b8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x34b7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x34b7bc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34b7c0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34B7C0u;
    {
        const bool branch_taken_0x34b7c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34b7c0) {
            ctx->pc = 0x34B7D0u;
            goto label_34b7d0;
        }
    }
    ctx->pc = 0x34B7C8u;
    // 0x34b7c8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x34B7C8u;
    {
        const bool branch_taken_0x34b7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b7c8) {
            ctx->pc = 0x34B820u;
            goto label_34b820;
        }
    }
    ctx->pc = 0x34B7D0u;
label_34b7d0:
    // 0x34b7d0: 0x8fc20040  lw          $v0, 0x40($fp)
    ctx->pc = 0x34b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x34b7d4: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x34b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x34b7d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34B7D8u;
    {
        const bool branch_taken_0x34b7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b7d8) {
            ctx->pc = 0x34B7E8u;
            goto label_34b7e8;
        }
    }
    ctx->pc = 0x34B7E0u;
    // 0x34b7e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x34B7E0u;
    {
        const bool branch_taken_0x34b7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b7e0) {
            ctx->pc = 0x34B820u;
            goto label_34b820;
        }
    }
    ctx->pc = 0x34B7E8u;
label_34b7e8:
    // 0x34b7e8: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x34b7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_34b7ec:
    // 0x34b7ec: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34b7f0: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x34b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x34b7f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x34b7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x34b7f8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x34b7f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34b7fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34B7FCu;
    {
        const bool branch_taken_0x34b7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b7fc) {
            ctx->pc = 0x34B80Cu;
            goto label_34b80c;
        }
    }
    ctx->pc = 0x34B804u;
    // 0x34b804: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x34B804u;
    {
        const bool branch_taken_0x34b804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b804) {
            ctx->pc = 0x34B798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b798;
        }
    }
    ctx->pc = 0x34B80Cu;
label_34b80c:
    // 0x34b80c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34b810: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34b810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34b814: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x34b814u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x34b818: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x34B818u;
    {
        const bool branch_taken_0x34b818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b818) {
            ctx->pc = 0x34B7ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34b7ec;
        }
    }
    ctx->pc = 0x34B820u;
label_34b820:
    // 0x34b820: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34b820u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b824: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x34b824u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34b828: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x34b828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x34b82c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x34b82cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34b830: 0x3e00008  jr          $ra
    ctx->pc = 0x34B830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B838u;
}
