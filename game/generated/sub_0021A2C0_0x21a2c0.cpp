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

// Function: sub_0021A2C0
// Address: 0x21a2c0 - 0x21a4e8
void sub_0021A2C0_0x21a2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A2C0_0x21a2c0");
#endif

    switch (ctx->pc) {
        case 0x21a2fcu: goto label_21a2fc;
        case 0x21a304u: goto label_21a304;
        case 0x21a330u: goto label_21a330;
        case 0x21a348u: goto label_21a348;
        case 0x21a390u: goto label_21a390;
        case 0x21a3c0u: goto label_21a3c0;
        case 0x21a440u: goto label_21a440;
        case 0x21a480u: goto label_21a480;
        case 0x21a4acu: goto label_21a4ac;
        default: break;
    }

    ctx->pc = 0x21a2c0u;

    // 0x21a2c0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x21a2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x21a2c4: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x21a2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x21a2c8: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x21a2c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x21a2cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21a2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a2d0: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x21a2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x21a2d4: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x21a2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x21a2d8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x21a2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21a2dc: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x21a2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x21a2e0: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x21a2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x21a2e4: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x21a2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x21a2e8: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x21a2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x21a2ec: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x21a2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x21a2f0: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x21a2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x21a2f4: 0xc0867cc  jal         func_219F30
    ctx->pc = 0x21A2F4u;
    SET_GPR_U32(ctx, 31, 0x21A2FCu);
    ctx->pc = 0x21A2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A2F4u;
    // 0x21a2f8: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F30u, 0x21A2F4u, 0x21A2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A2FCu;
label_21a2fc:
    // 0x21a2fc: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21A2FCu;
    SET_GPR_U32(ctx, 31, 0x21A304u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21A2FCu, 0x21A304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A304u;
label_21a304:
    // 0x21a304: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21a304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a308: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x21a308u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21a30c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x21a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x21a310: 0x24515c20  addiu       $s1, $v0, 0x5C20
    ctx->pc = 0x21a310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 23584));
    // 0x21a314: 0x1810  mfhi        $v1
    ctx->pc = 0x21a314u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x21a318: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21a318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21a31c: 0x5c1821  addu        $v1, $v0, $gp
    ctx->pc = 0x21a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x21a320: 0x8c63a398  lw          $v1, -0x5C68($v1)
    ctx->pc = 0x21a320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943640)));
    // 0x21a324: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x21a324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x21a328: 0xc0867b4  jal         func_219ED0
    ctx->pc = 0x21A328u;
    SET_GPR_U32(ctx, 31, 0x21A330u);
    ctx->pc = 0x21A32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A328u;
    // 0x21a32c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219ED0u, 0x21A328u, 0x21A330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A330u;
label_21a330:
    // 0x21a330: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x21a330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x21a334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a338: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21A338u;
    {
        const bool branch_taken_0x21a338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A338u;
        // 0x21a33c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a338) {
            ctx->pc = 0x21A378u;
            goto label_21a378;
        }
    }
    ctx->pc = 0x21A340u;
    // 0x21a340: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21A340u;
    SET_GPR_U32(ctx, 31, 0x21A348u);
    ctx->pc = 0x21A344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A340u;
    // 0x21a344: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21A340u, 0x21A348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A348u;
label_21a348:
    // 0x21a348: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x21a348u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21a34c: 0x24450003  addiu       $a1, $v0, 0x3
    ctx->pc = 0x21a34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x21a350: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21a350u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a354: 0x26106920  addiu       $s0, $s0, 0x6920
    ctx->pc = 0x21a354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26912));
    // 0x21a358: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x21a358u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x21a35c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x21a35cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x21a360: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x21a360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21a364: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x21a364u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21a368: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21a368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21a36c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x21a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21a370: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x21a370u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a374: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x21a374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_21a378:
    // 0x21a378: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x21a378u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a37c: 0x245468c0  addiu       $s4, $v0, 0x68C0
    ctx->pc = 0x21a37cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 26816));
    // 0x21a380: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21a380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a384: 0x26960004  addiu       $s6, $s4, 0x4
    ctx->pc = 0x21a384u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x21a388: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x21a388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x21a38c: 0x0  nop
    ctx->pc = 0x21a38cu;
    // NOP
label_21a390:
    // 0x21a390: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x21a390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x21a394: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21a394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21a398: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x21a398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21a39c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x21a39cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a3a0: 0x16550017  bne         $s2, $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x21A3A0u;
    {
        const bool branch_taken_0x21a3a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        ctx->pc = 0x21A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3A0u;
        // 0x21a3a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a3a0) {
            ctx->pc = 0x21A400u;
            goto label_21a400;
        }
    }
    ctx->pc = 0x21A3A8u;
    // 0x21a3a8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x21a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x21a3ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21a3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a3b0: 0x244968b0  addiu       $t1, $v0, 0x68B0
    ctx->pc = 0x21a3b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 26800));
    // 0x21a3b4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21a3b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a3b8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x21a3b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a3bc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x21a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_21a3c0:
    // 0x21a3c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21a3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21a3c4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x21a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x21a3c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21a3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a3cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21a3d0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x21a3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x21a3d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a3d8: 0x10480005  beq         $v0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A3D8u;
    {
        const bool branch_taken_0x21a3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x21A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3D8u;
        // 0x21a3dc: 0x28a60004  slti        $a2, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a3d8) {
            ctx->pc = 0x21A3F0u;
            goto label_21a3f0;
        }
    }
    ctx->pc = 0x21A3E0u;
    // 0x21a3e0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x21a3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21a3e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21a3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21a3e8: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x21a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x21a3ec: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x21a3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_21a3f0:
    // 0x21a3f0: 0x14c0fff3  bnez        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x21A3F0u;
    {
        const bool branch_taken_0x21a3f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3F0u;
        // 0x21a3f4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a3f0) {
            ctx->pc = 0x21A3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a3c0;
        }
    }
    ctx->pc = 0x21A3F8u;
    // 0x21a3f8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x21A3F8u;
    {
        const bool branch_taken_0x21a3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a3f8) {
            ctx->pc = 0x21A478u;
            goto label_21a478;
        }
    }
    ctx->pc = 0x21A400u;
label_21a400:
    // 0x21a400: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x21a400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x21a404: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x21a404u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21a408: 0x961821  addu        $v1, $a0, $s6
    ctx->pc = 0x21a408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x21a40c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a410: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x21A410u;
    {
        const bool branch_taken_0x21a410 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A410u;
        // 0x21a414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a410) {
            ctx->pc = 0x21A478u;
            goto label_21a478;
        }
    }
    ctx->pc = 0x21A418u;
    // 0x21a418: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x21a418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x21a41c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x21a41cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a420: 0x244268c8  addiu       $v0, $v0, 0x68C8
    ctx->pc = 0x21a420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26824));
    // 0x21a424: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x21a424u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a428: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x21a428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21a42c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21a430: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x21a430u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a434: 0x8c67fffc  lw          $a3, -0x4($v1)
    ctx->pc = 0x21a434u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x21a438: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x21a438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21a43c: 0x0  nop
    ctx->pc = 0x21a43cu;
    // NOP
label_21a440:
    // 0x21a440: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21a440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21a444: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x21a444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x21a448: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21a448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a44c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21a450: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x21a450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x21a454: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21a454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a458: 0x104a0005  beq         $v0, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A458u;
    {
        const bool branch_taken_0x21a458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x21A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A458u;
        // 0x21a45c: 0xa7302a  slt         $a2, $a1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a458) {
            ctx->pc = 0x21A470u;
            goto label_21a470;
        }
    }
    ctx->pc = 0x21A460u;
    // 0x21a460: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x21a460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21a464: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21a464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21a468: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x21a468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x21a46c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x21a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_21a470:
    // 0x21a470: 0x14c0fff3  bnez        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x21A470u;
    {
        const bool branch_taken_0x21a470 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A470u;
        // 0x21a474: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a470) {
            ctx->pc = 0x21A440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a440;
        }
    }
    ctx->pc = 0x21A478u;
label_21a478:
    // 0x21a478: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21A478u;
    SET_GPR_U32(ctx, 31, 0x21A480u);
    ctx->pc = 0x21A47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A478u;
    // 0x21a47c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21A478u, 0x21A480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A480u;
label_21a480:
    // 0x21a480: 0x123880  sll         $a3, $s2, 2
    ctx->pc = 0x21a480u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x21a484: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x21a484u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21a488: 0xf73821  addu        $a3, $a3, $s7
    ctx->pc = 0x21a488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
    // 0x21a48c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21a48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a490: 0x1810  mfhi        $v1
    ctx->pc = 0x21a490u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x21a494: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21a494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21a498: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x21a498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x21a49c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x21a49cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a4a0: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x21a4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x21a4a4: 0xc0867b4  jal         func_219ED0
    ctx->pc = 0x21A4A4u;
    SET_GPR_U32(ctx, 31, 0x21A4ACu);
    ctx->pc = 0x21A4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A4A4u;
    // 0x21a4a8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219ED0u, 0x21A4A4u, 0x21A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A4ACu;
label_21a4ac:
    // 0x21a4ac: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x21a4acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x21a4b0: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x21A4B0u;
    {
        const bool branch_taken_0x21a4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4B0u;
        // 0x21a4b4: 0x111840  sll         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4b0) {
            ctx->pc = 0x21A390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a390;
        }
    }
    ctx->pc = 0x21A4B8u;
    // 0x21a4b8: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x21a4b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x21a4bc: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x21a4bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x21a4c0: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x21a4c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x21a4c4: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x21a4c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x21a4c8: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x21a4c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x21a4cc: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x21a4ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x21a4d0: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x21a4d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x21a4d4: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x21a4d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x21a4d8: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x21a4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x21a4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x21A4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4DCu;
        // 0x21a4e0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A4E4u;
    // 0x21a4e4: 0x0  nop
    ctx->pc = 0x21a4e4u;
    // NOP
    ctx->pc = 0x21a4e8u;
}
