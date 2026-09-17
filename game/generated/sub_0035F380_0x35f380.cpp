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

// Function: sub_0035F380
// Address: 0x35f380 - 0x35f778
void sub_0035F380_0x35f380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F380_0x35f380");
#endif

    switch (ctx->pc) {
        case 0x35f3a8u: goto label_35f3a8;
        case 0x35f3d4u: goto label_35f3d4;
        case 0x35f410u: goto label_35f410;
        case 0x35f444u: goto label_35f444;
        case 0x35f498u: goto label_35f498;
        case 0x35f4b0u: goto label_35f4b0;
        case 0x35f4c0u: goto label_35f4c0;
        case 0x35f580u: goto label_35f580;
        case 0x35f694u: goto label_35f694;
        case 0x35f6b4u: goto label_35f6b4;
        case 0x35f6c0u: goto label_35f6c0;
        case 0x35f6c8u: goto label_35f6c8;
        case 0x35f6e0u: goto label_35f6e0;
        case 0x35f710u: goto label_35f710;
        case 0x35f728u: goto label_35f728;
        case 0x35f744u: goto label_35f744;
        default: break;
    }

    ctx->pc = 0x35f380u;

label_35f380:
    // 0x35f380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35f380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35f384: 0x308affff  andi        $t2, $a0, 0xFFFF
    ctx->pc = 0x35f384u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35f388: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35f388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35f38c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x35f38cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f390: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35f390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35f394: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35F394u;
    {
        const bool branch_taken_0x35f394 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F394u;
        // 0x35f398: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f394) {
            ctx->pc = 0x35F3B8u;
            goto label_35f3b8;
        }
    }
    ctx->pc = 0x35F39Cu;
    // 0x35f39c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35f39cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35f3a0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F3A0u;
    SET_GPR_U32(ctx, 31, 0x35F3A8u);
    ctx->pc = 0x35F3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F3A0u;
    // 0x35f3a4: 0x24845f98  addiu       $a0, $a0, 0x5F98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F3A0u, 0x35F3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F3A8u;
label_35f3a8:
    // 0x35f3a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f3ac: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x35F3ACu;
    {
        const bool branch_taken_0x35f3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F3ACu;
        // 0x35f3b0: 0x34420026  ori         $v0, $v0, 0x26 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f3ac) {
            ctx->pc = 0x35F644u;
            goto label_35f644;
        }
    }
    ctx->pc = 0x35F3B4u;
    // 0x35f3b4: 0x0  nop
    ctx->pc = 0x35f3b4u;
    // NOP
label_35f3b8:
    // 0x35f3b8: 0x2d420040  sltiu       $v0, $t2, 0x40
    ctx->pc = 0x35f3b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x35f3bc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x35F3BCu;
    {
        const bool branch_taken_0x35f3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f3bc) {
            ctx->pc = 0x35F3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35F3BCu;
            // 0x35f3c0: 0xa1040  sll         $v0, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F3E0u;
            goto label_35f3e0;
        }
    }
    ctx->pc = 0x35F3C4u;
    // 0x35f3c4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35f3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35f3c8: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x35f3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f3cc: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F3CCu;
    SET_GPR_U32(ctx, 31, 0x35F3D4u);
    ctx->pc = 0x35F3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F3CCu;
    // 0x35f3d0: 0x24845fd0  addiu       $a0, $a0, 0x5FD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F3CCu, 0x35F3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F3D4u;
label_35f3d4:
    // 0x35f3d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f3d8: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x35F3D8u;
    {
        const bool branch_taken_0x35f3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F3D8u;
        // 0x35f3dc: 0x3442001f  ori         $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f3d8) {
            ctx->pc = 0x35F644u;
            goto label_35f644;
        }
    }
    ctx->pc = 0x35F3E0u;
label_35f3e0:
    // 0x35f3e0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x35f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x35f3e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35f3e8: 0x3c04001d  lui         $a0, 0x1D
    ctx->pc = 0x35f3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29 << 16));
    // 0x35f3ec: 0x24842c68  addiu       $a0, $a0, 0x2C68
    ctx->pc = 0x35f3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11368));
    // 0x35f3f0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x35f3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x35f3f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35f3f8: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35F3F8u;
    {
        const bool branch_taken_0x35f3f8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x35F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F3F8u;
        // 0x35f3fc: 0x3c0c001d  lui         $t4, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f3f8) {
            ctx->pc = 0x35F420u;
            goto label_35f420;
        }
    }
    ctx->pc = 0x35F400u;
    // 0x35f400: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35f400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35f404: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x35f404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f408: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F408u;
    SET_GPR_U32(ctx, 31, 0x35F410u);
    ctx->pc = 0x35F40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F408u;
    // 0x35f40c: 0x24846008  addiu       $a0, $a0, 0x6008 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F408u, 0x35F410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F410u;
label_35f410:
    // 0x35f410: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f414: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x35F414u;
    {
        const bool branch_taken_0x35f414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F414u;
        // 0x35f418: 0x34420022  ori         $v0, $v0, 0x22 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f414) {
            ctx->pc = 0x35F644u;
            goto label_35f644;
        }
    }
    ctx->pc = 0x35F41Cu;
    // 0x35f41c: 0x0  nop
    ctx->pc = 0x35f41cu;
    // NOP
label_35f420:
    // 0x35f420: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x35f420u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x35f424: 0x24020a01  addiu       $v0, $zero, 0xA01
    ctx->pc = 0x35f424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2561));
    // 0x35f428: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35F428u;
    {
        const bool branch_taken_0x35f428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F428u;
        // 0x35f42c: 0x2078821  addu        $s1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f428) {
            ctx->pc = 0x35F450u;
            goto label_35f450;
        }
    }
    ctx->pc = 0x35F430u;
    // 0x35f430: 0x90a60005  lbu         $a2, 0x5($a1)
    ctx->pc = 0x35f430u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x35f434: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35f434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35f438: 0x90a50004  lbu         $a1, 0x4($a1)
    ctx->pc = 0x35f438u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x35f43c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F43Cu;
    SET_GPR_U32(ctx, 31, 0x35F444u);
    ctx->pc = 0x35F440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F43Cu;
    // 0x35f440: 0x24846050  addiu       $a0, $a0, 0x6050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F43Cu, 0x35F444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F444u;
label_35f444:
    // 0x35f444: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f448: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x35F448u;
    {
        const bool branch_taken_0x35f448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F448u;
        // 0x35f44c: 0x3442001e  ori         $v0, $v0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f448) {
            ctx->pc = 0x35F644u;
            goto label_35f644;
        }
    }
    ctx->pc = 0x35F450u;
label_35f450:
    // 0x35f450: 0x2783cc04  addiu       $v1, $gp, -0x33FC
    ctx->pc = 0x35f450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953988));
    // 0x35f454: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35f458: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x35f458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x35f45c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35F45Cu;
    {
        const bool branch_taken_0x35f45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f45c) {
            ctx->pc = 0x35F490u;
            goto label_35f490;
        }
    }
    ctx->pc = 0x35F464u;
    // 0x35f464: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x35f464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x35f468: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x35f468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35f46c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35F46Cu;
    {
        const bool branch_taken_0x35f46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F46Cu;
        // 0x35f470: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f46c) {
            ctx->pc = 0x35F490u;
            goto label_35f490;
        }
    }
    ctx->pc = 0x35F474u;
    // 0x35f474: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x35f474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x35f478: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x35f478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x35f47c: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x35f47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x35f480: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x35f480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x35f484: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x35F484u;
    {
        const bool branch_taken_0x35f484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F484u;
        // 0x35f488: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f484) {
            ctx->pc = 0x35F4C8u;
            goto label_35f4c8;
        }
    }
    ctx->pc = 0x35F48Cu;
    // 0x35f48c: 0x0  nop
    ctx->pc = 0x35f48cu;
    // NOP
label_35f490:
    // 0x35f490: 0xc0d7822  jal         func_35E088
    ctx->pc = 0x35F490u;
    SET_GPR_U32(ctx, 31, 0x35F498u);
    ctx->pc = 0x35E088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E088u, 0x35F490u, 0x35F498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F498u;
label_35f498:
    // 0x35f498: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35f498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35f49c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35f49cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f4a0: 0x24846098  addiu       $a0, $a0, 0x6098
    ctx->pc = 0x35f4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24728));
    // 0x35f4a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35f4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f4a8: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F4A8u;
    SET_GPR_U32(ctx, 31, 0x35F4B0u);
    ctx->pc = 0x35F4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F4A8u;
    // 0x35f4ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F4A8u, 0x35F4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F4B0u;
label_35f4b0:
    // 0x35f4b0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f4b4: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x35F4B4u;
    {
        const bool branch_taken_0x35f4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F4B4u;
        // 0x35f4b8: 0x34420021  ori         $v0, $v0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f4b4) {
            ctx->pc = 0x35F644u;
            goto label_35f644;
        }
    }
    ctx->pc = 0x35F4BCu;
    // 0x35f4bc: 0x0  nop
    ctx->pc = 0x35f4bcu;
    // NOP
label_35f4c0:
    // 0x35f4c0: 0xac700034  sw          $s0, 0x34($v1)
    ctx->pc = 0x35f4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 16));
    // 0x35f4c4: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x35f4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_35f4c8:
    // 0x35f4c8: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x35f4c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x35f4cc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x35f4ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35f4d0: 0x0  nop
    ctx->pc = 0x35f4d0u;
    // NOP
    // 0x35f4d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35F4D4u;
    {
        const bool branch_taken_0x35f4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F4D4u;
        // 0x35f4d8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f4d4) {
            ctx->pc = 0x35F4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f4c0;
        }
    }
    ctx->pc = 0x35F4DCu;
    // 0x35f4dc: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x35f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x35f4e0: 0x3c0b001d  lui         $t3, 0x1D
    ctx->pc = 0x35f4e0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)29 << 16));
    // 0x35f4e4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x35f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x35f4e8: 0x8f84c7e4  lw          $a0, -0x381C($gp)
    ctx->pc = 0x35f4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952932)));
    // 0x35f4ec: 0x25662fe8  addiu       $a2, $t3, 0x2FE8
    ctx->pc = 0x35f4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 12264));
    // 0x35f4f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35f4f4: 0x464821  addu        $t1, $v0, $a2
    ctx->pc = 0x35f4f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x35f4f8: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x35f4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
    // 0x35f4fc: 0x480003c  bltz        $a0, . + 4 + (0x3C << 2)
    ctx->pc = 0x35F4FCu;
    {
        const bool branch_taken_0x35f4fc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x35F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F4FCu;
        // 0x35f500: 0xad300000  sw          $s0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f4fc) {
            ctx->pc = 0x35F5F0u;
            goto label_35f5f0;
        }
    }
    ctx->pc = 0x35F504u;
    // 0x35f504: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x35f504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x35f508: 0x25832c68  addiu       $v1, $t4, 0x2C68
    ctx->pc = 0x35f508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 11368));
    // 0x35f50c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35f510: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x35f510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x35f514: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35f514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35f518: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x35f518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35f51c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35f51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35f520: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x35f520u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35f524: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35F524u;
    {
        const bool branch_taken_0x35f524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F524u;
        // 0x35f528: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f524) {
            ctx->pc = 0x35F540u;
            goto label_35f540;
        }
    }
    ctx->pc = 0x35F52Cu;
    // 0x35f52c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35f530: 0xad240010  sw          $a0, 0x10($t1)
    ctx->pc = 0x35f530u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 4));
    // 0x35f534: 0xad22000c  sw          $v0, 0xC($t1)
    ctx->pc = 0x35f534u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
    // 0x35f538: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x35F538u;
    {
        const bool branch_taken_0x35f538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F538u;
        // 0x35f53c: 0xaf8ac7e4  sw          $t2, -0x381C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952932), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f538) {
            ctx->pc = 0x35F600u;
            goto label_35f600;
        }
    }
    ctx->pc = 0x35F540u;
label_35f540:
    // 0x35f540: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x35f540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x35f544: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x35f544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x35f548: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35f548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35f54c: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x35f54cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x35f550: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x35f550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x35f554: 0x4c00021  bltz        $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x35F554u;
    {
        const bool branch_taken_0x35f554 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x35F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F554u;
        // 0x35f558: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f554) {
            ctx->pc = 0x35F5DCu;
            goto label_35f5dc;
        }
    }
    ctx->pc = 0x35F55Cu;
    // 0x35f55c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x35f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x35f560: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35f560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35f564: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x35f564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35f568: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35f568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35f56c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x35f56cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35f570: 0x54600015  bnel        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x35F570u;
    {
        const bool branch_taken_0x35f570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f570) {
            ctx->pc = 0x35F574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35F570u;
            // 0x35f574: 0xad28000c  sw          $t0, 0xC($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F5C8u;
            goto label_35f5c8;
        }
    }
    ctx->pc = 0x35F578u;
    // 0x35f578: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x35f578u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f57c: 0x0  nop
    ctx->pc = 0x35f57cu;
    // NOP
label_35f580:
    // 0x35f580: 0x25642fe8  addiu       $a0, $t3, 0x2FE8
    ctx->pc = 0x35f580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 12264));
    // 0x35f584: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x35f584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x35f588: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x35f588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x35f58c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35f590: 0x443821  addu        $a3, $v0, $a0
    ctx->pc = 0x35f590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35f594: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x35f594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x35f598: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x35f598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x35f59c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x35f59cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f5a0: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x35F5A0u;
    {
        const bool branch_taken_0x35f5a0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x35F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F5A0u;
        // 0x35f5a4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f5a0) {
            ctx->pc = 0x35F5DCu;
            goto label_35f5dc;
        }
    }
    ctx->pc = 0x35F5A8u;
    // 0x35f5a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35f5ac: 0x25832c68  addiu       $v1, $t4, 0x2C68
    ctx->pc = 0x35f5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 11368));
    // 0x35f5b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35f5b4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x35f5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35f5b8: 0x204202b  sltu        $a0, $s0, $a0
    ctx->pc = 0x35f5b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x35f5bc: 0x5080fff0  beql        $a0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x35F5BCu;
    {
        const bool branch_taken_0x35f5bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f5bc) {
            ctx->pc = 0x35F5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35F5BCu;
            // 0x35f5c0: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f580;
        }
    }
    ctx->pc = 0x35F5C4u;
    // 0x35f5c4: 0xad28000c  sw          $t0, 0xC($t1)
    ctx->pc = 0x35f5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 8));
label_35f5c8:
    // 0x35f5c8: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x35f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x35f5cc: 0xad220010  sw          $v0, 0x10($t1)
    ctx->pc = 0x35f5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 2));
    // 0x35f5d0: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x35f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x35f5d4: 0x443000b  bgezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x35F5D4u;
    {
        const bool branch_taken_0x35f5d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x35f5d4) {
            ctx->pc = 0x35F5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35F5D4u;
            // 0x35f5d8: 0x8d24000c  lw          $a0, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F604u;
            goto label_35f604;
        }
    }
    ctx->pc = 0x35F5DCu;
label_35f5dc:
    // 0x35f5dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35f5e0: 0xad28000c  sw          $t0, 0xC($t1)
    ctx->pc = 0x35f5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 8));
    // 0x35f5e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x35F5E4u;
    {
        const bool branch_taken_0x35f5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F5E4u;
        // 0x35f5e8: 0xad220010  sw          $v0, 0x10($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f5e4) {
            ctx->pc = 0x35F600u;
            goto label_35f600;
        }
    }
    ctx->pc = 0x35F5ECu;
    // 0x35f5ec: 0x0  nop
    ctx->pc = 0x35f5ecu;
    // NOP
label_35f5f0:
    // 0x35f5f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35f5f4: 0xaf8ac7e4  sw          $t2, -0x381C($gp)
    ctx->pc = 0x35f5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952932), GPR_U32(ctx, 10));
    // 0x35f5f8: 0xad220010  sw          $v0, 0x10($t1)
    ctx->pc = 0x35f5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 2));
    // 0x35f5fc: 0xad22000c  sw          $v0, 0xC($t1)
    ctx->pc = 0x35f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
label_35f600:
    // 0x35f600: 0x8d24000c  lw          $a0, 0xC($t1)
    ctx->pc = 0x35f600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_35f604:
    // 0x35f604: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35F604u;
    {
        const bool branch_taken_0x35f604 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x35F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F604u;
        // 0x35f608: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f604) {
            ctx->pc = 0x35F620u;
            goto label_35f620;
        }
    }
    ctx->pc = 0x35F60Cu;
    // 0x35f60c: 0x25632fe8  addiu       $v1, $t3, 0x2FE8
    ctx->pc = 0x35f60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 12264));
    // 0x35f610: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35f610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35f614: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35f614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35f618: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x35f618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35f61c: 0xacea0010  sw          $t2, 0x10($a3)
    ctx->pc = 0x35f61cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 10));
label_35f620:
    // 0x35f620: 0x8d260010  lw          $a2, 0x10($t1)
    ctx->pc = 0x35f620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x35f624: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x35F624u;
    {
        const bool branch_taken_0x35f624 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x35F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F624u;
        // 0x35f628: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f624) {
            ctx->pc = 0x35F640u;
            goto label_35f640;
        }
    }
    ctx->pc = 0x35F62Cu;
    // 0x35f62c: 0x25632fe8  addiu       $v1, $t3, 0x2FE8
    ctx->pc = 0x35f62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 12264));
    // 0x35f630: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x35f630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x35f634: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35f634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35f638: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x35f638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35f63c: 0xacea000c  sw          $t2, 0xC($a3)
    ctx->pc = 0x35f63cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 10));
label_35f640:
    // 0x35f640: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35f644:
    // 0x35f644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35f644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f648: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35f648u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35f64c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35f64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f650: 0x3e00008  jr          $ra
    ctx->pc = 0x35F650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F650u;
        // 0x35f654: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F658u;
    // 0x35f658: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35f658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35f65c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35f65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35f660: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35f660u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35f664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35f668: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35f668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f66c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35f66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35f670: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35f670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f674: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35f674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35f678: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x35f678u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f67c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35f67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35f680: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x35F680u;
    {
        const bool branch_taken_0x35f680 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F680u;
        // 0x35f684: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f680) {
            ctx->pc = 0x35F6A0u;
            goto label_35f6a0;
        }
    }
    ctx->pc = 0x35F688u;
    // 0x35f688: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35f688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35f68c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F68Cu;
    SET_GPR_U32(ctx, 31, 0x35F694u);
    ctx->pc = 0x35F690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F68Cu;
    // 0x35f690: 0x24846388  addiu       $a0, $a0, 0x6388 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F68Cu, 0x35F694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F694u;
label_35f694:
    // 0x35f694: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f698: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x35F698u;
    {
        const bool branch_taken_0x35f698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F698u;
        // 0x35f69c: 0x34420025  ori         $v0, $v0, 0x25 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f698) {
            ctx->pc = 0x35F758u;
            goto label_35f758;
        }
    }
    ctx->pc = 0x35F6A0u;
label_35f6a0:
    // 0x35f6a0: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x35F6A0u;
    {
        const bool branch_taken_0x35f6a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F6A0u;
        // 0x35f6a4: 0x3c02001d  lui         $v0, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f6a0) {
            ctx->pc = 0x35F6D0u;
            goto label_35f6d0;
        }
    }
    ctx->pc = 0x35F6A8u;
    // 0x35f6a8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35f6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35f6ac: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F6ACu;
    SET_GPR_U32(ctx, 31, 0x35F6B4u);
    ctx->pc = 0x35F6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F6ACu;
    // 0x35f6b0: 0x248463c0  addiu       $a0, $a0, 0x63C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F6ACu, 0x35F6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F6B4u;
label_35f6b4:
    // 0x35f6b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f6b8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x35F6B8u;
    {
        const bool branch_taken_0x35f6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F6B8u;
        // 0x35f6bc: 0x34420026  ori         $v0, $v0, 0x26 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f6b8) {
            ctx->pc = 0x35F758u;
            goto label_35f758;
        }
    }
    ctx->pc = 0x35F6C0u;
label_35f6c0:
    // 0x35f6c0: 0xc0d7820  jal         func_35E080
    ctx->pc = 0x35F6C0u;
    SET_GPR_U32(ctx, 31, 0x35F6C8u);
    ctx->pc = 0x35E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E080u, 0x35F6C0u, 0x35F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F6C8u;
label_35f6c8:
    // 0x35f6c8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x35F6C8u;
    {
        const bool branch_taken_0x35f6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F6C8u;
        // 0x35f6cc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f6c8) {
            ctx->pc = 0x35F714u;
            goto label_35f714;
        }
    }
    ctx->pc = 0x35F6D0u;
label_35f6d0:
    // 0x35f6d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35f6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f6d4: 0x24432c68  addiu       $v1, $v0, 0x2C68
    ctx->pc = 0x35f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 11368));
    // 0x35f6d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x35F6D8u;
    {
        const bool branch_taken_0x35f6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F6D8u;
        // 0x35f6dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f6d8) {
            ctx->pc = 0x35F6E4u;
            goto label_35f6e4;
        }
    }
    ctx->pc = 0x35F6E0u;
label_35f6e0:
    // 0x35f6e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35f6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_35f6e4:
    // 0x35f6e4: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x35f6e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x35f6e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35F6E8u;
    {
        const bool branch_taken_0x35f6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f6e8) {
            ctx->pc = 0x35F714u;
            goto label_35f714;
        }
    }
    ctx->pc = 0x35F6F0u;
    // 0x35f6f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35f6f4: 0x1445fffa  bne         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35F6F4u;
    {
        const bool branch_taken_0x35f6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x35F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F6F4u;
        // 0x35f6f8: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f6f4) {
            ctx->pc = 0x35F6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f6e0;
        }
    }
    ctx->pc = 0x35F6FCu;
    // 0x35f6fc: 0x1080fff0  beqz        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x35F6FCu;
    {
        const bool branch_taken_0x35f6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F6FCu;
        // 0x35f700: 0x3090ffff  andi        $s0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f6fc) {
            ctx->pc = 0x35F6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f6c0;
        }
    }
    ctx->pc = 0x35F704u;
    // 0x35f704: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x35f704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x35f708: 0xc0d7860  jal         func_35E180
    ctx->pc = 0x35F708u;
    SET_GPR_U32(ctx, 31, 0x35F710u);
    ctx->pc = 0x35F70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F708u;
    // 0x35f70c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E180u, 0x35F708u, 0x35F710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F710u;
label_35f710:
    // 0x35f710: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35f710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35f714:
    // 0x35f714: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x35F714u;
    {
        const bool branch_taken_0x35f714 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F714u;
        // 0x35f718: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f714) {
            ctx->pc = 0x35F738u;
            goto label_35f738;
        }
    }
    ctx->pc = 0x35F71Cu;
    // 0x35f71c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35f71cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35f720: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F720u;
    SET_GPR_U32(ctx, 31, 0x35F728u);
    ctx->pc = 0x35F724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F720u;
    // 0x35f724: 0x24846438  addiu       $a0, $a0, 0x6438 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F720u, 0x35F728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F728u;
label_35f728:
    // 0x35f728: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f72c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x35F72Cu;
    {
        const bool branch_taken_0x35f72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F72Cu;
        // 0x35f730: 0x3442001c  ori         $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f72c) {
            ctx->pc = 0x35F758u;
            goto label_35f758;
        }
    }
    ctx->pc = 0x35F734u;
    // 0x35f734: 0x0  nop
    ctx->pc = 0x35f734u;
    // NOP
label_35f738:
    // 0x35f738: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x35f738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f73c: 0xc0d7ce0  jal         func_35F380
    ctx->pc = 0x35F73Cu;
    SET_GPR_U32(ctx, 31, 0x35F744u);
    ctx->pc = 0x35F740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F73Cu;
    // 0x35f740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F380u;
    goto label_35f380;
    ctx->pc = 0x35F744u;
label_35f744:
    // 0x35f744: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x35f744u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35f748: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35F748u;
    {
        const bool branch_taken_0x35f748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F748u;
        // 0x35f74c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f748) {
            ctx->pc = 0x35F758u;
            goto label_35f758;
        }
    }
    ctx->pc = 0x35F750u;
    // 0x35f750: 0xa6500000  sh          $s0, 0x0($s2)
    ctx->pc = 0x35f750u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x35f754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35f758:
    // 0x35f758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35f758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f75c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35f75cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35f760: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35f760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f764: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35f764u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f768: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35f768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f76c: 0x3e00008  jr          $ra
    ctx->pc = 0x35F76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F76Cu;
        // 0x35f770: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F774u;
    // 0x35f774: 0x0  nop
    ctx->pc = 0x35f774u;
    // NOP
    ctx->pc = 0x35f778u;
}
