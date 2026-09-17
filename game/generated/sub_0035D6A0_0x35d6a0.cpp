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

// Function: sub_0035D6A0
// Address: 0x35d6a0 - 0x35dc10
void sub_0035D6A0_0x35d6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D6A0_0x35d6a0");
#endif

    switch (ctx->pc) {
        case 0x35d6e0u: goto label_35d6e0;
        case 0x35d6f0u: goto label_35d6f0;
        case 0x35d710u: goto label_35d710;
        case 0x35d734u: goto label_35d734;
        case 0x35d754u: goto label_35d754;
        case 0x35d76cu: goto label_35d76c;
        case 0x35d7a0u: goto label_35d7a0;
        case 0x35d7b8u: goto label_35d7b8;
        case 0x35d814u: goto label_35d814;
        case 0x35d828u: goto label_35d828;
        case 0x35d838u: goto label_35d838;
        case 0x35d858u: goto label_35d858;
        case 0x35d86cu: goto label_35d86c;
        case 0x35d928u: goto label_35d928;
        case 0x35d958u: goto label_35d958;
        case 0x35d988u: goto label_35d988;
        case 0x35d9ecu: goto label_35d9ec;
        case 0x35d9fcu: goto label_35d9fc;
        case 0x35da14u: goto label_35da14;
        case 0x35da1cu: goto label_35da1c;
        case 0x35da50u: goto label_35da50;
        case 0x35dad0u: goto label_35dad0;
        case 0x35dae4u: goto label_35dae4;
        case 0x35db24u: goto label_35db24;
        case 0x35db2cu: goto label_35db2c;
        case 0x35db48u: goto label_35db48;
        case 0x35dbccu: goto label_35dbcc;
        case 0x35dbd4u: goto label_35dbd4;
        default: break;
    }

    ctx->pc = 0x35d6a0u;

    // 0x35d6a0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x35d6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x35d6a4: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x35d6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x35d6a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x35d6a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d6ac: 0xffbe0160  sd          $fp, 0x160($sp)
    ctx->pc = 0x35d6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 30));
    // 0x35d6b0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x35d6b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d6b4: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x35d6b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x35d6b8: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x35d6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x35d6bc: 0xffb10128  sd          $s1, 0x128($sp)
    ctx->pc = 0x35d6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 17));
    // 0x35d6c0: 0xffb30138  sd          $s3, 0x138($sp)
    ctx->pc = 0x35d6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 19));
    // 0x35d6c4: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x35d6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x35d6c8: 0xffb50148  sd          $s5, 0x148($sp)
    ctx->pc = 0x35d6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 21));
    // 0x35d6cc: 0xffb60150  sd          $s6, 0x150($sp)
    ctx->pc = 0x35d6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 22));
    // 0x35d6d0: 0xffb70158  sd          $s7, 0x158($sp)
    ctx->pc = 0x35d6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 23));
    // 0x35d6d4: 0xffbf0168  sd          $ra, 0x168($sp)
    ctx->pc = 0x35d6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 31));
    // 0x35d6d8: 0xc0d754e  jal         func_35D538
    ctx->pc = 0x35D6D8u;
    SET_GPR_U32(ctx, 31, 0x35D6E0u);
    ctx->pc = 0x35D6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D6D8u;
    // 0x35d6dc: 0xe7b40170  swc1        $f20, 0x170($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D538u, 0x35D6D8u, 0x35D6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D6E0u;
label_35d6e0:
    // 0x35d6e0: 0xc7959688  lwc1        $f21, -0x6978($gp)
    ctx->pc = 0x35d6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x35d6e4: 0xffa00110  sd          $zero, 0x110($sp)
    ctx->pc = 0x35d6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 0));
    // 0x35d6e8: 0xffa00118  sd          $zero, 0x118($sp)
    ctx->pc = 0x35d6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 0));
    // 0x35d6ec: 0x12b0c0  sll         $s6, $s2, 3
    ctx->pc = 0x35d6ecu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_35d6f0:
    // 0x35d6f0: 0x26550001  addiu       $s5, $s2, 0x1
    ctx->pc = 0x35d6f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x35d6f4: 0x2d21021  addu        $v0, $s6, $s2
    ctx->pc = 0x35d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x35d6f8: 0x152400  sll         $a0, $s5, 16
    ctx->pc = 0x35d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x35d6fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x35d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x35d700: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x35d700u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x35d704: 0x3a28021  addu        $s0, $sp, $v0
    ctx->pc = 0x35d704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x35d708: 0xc0d6062  jal         func_358188
    ctx->pc = 0x35D708u;
    SET_GPR_U32(ctx, 31, 0x35D710u);
    ctx->pc = 0x35D70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D708u;
    // 0x35d70c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358188u, 0x35D708u, 0x35D710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D710u;
label_35d710:
    // 0x35d710: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35d710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d714: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x35d714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x35d718: 0x2791c7e0  addiu       $s1, $gp, -0x3820
    ctx->pc = 0x35d718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952928));
    // 0x35d71c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x35d71cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x35d720: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x35D720u;
    {
        const bool branch_taken_0x35d720 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d720) {
            ctx->pc = 0x35D724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35D720u;
            // 0x35d724: 0x96020006  lhu         $v0, 0x6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35D740u;
            goto label_35d740;
        }
    }
    ctx->pc = 0x35D728u;
    // 0x35d728: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x35d728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x35d72c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35D72Cu;
    SET_GPR_U32(ctx, 31, 0x35D734u);
    ctx->pc = 0x35D730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D72Cu;
    // 0x35d730: 0x24445b50  addiu       $a0, $v0, 0x5B50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35D72Cu, 0x35D734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D734u;
label_35d734:
    // 0x35d734: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x35D734u;
    {
        const bool branch_taken_0x35d734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D734u;
        // 0x35d738: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d734) {
            ctx->pc = 0x35DBD8u;
            goto label_35dbd8;
        }
    }
    ctx->pc = 0x35D73Cu;
    // 0x35d73c: 0x0  nop
    ctx->pc = 0x35d73cu;
    // NOP
label_35d740:
    // 0x35d740: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x35D740u;
    {
        const bool branch_taken_0x35d740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d740) {
            ctx->pc = 0x35D744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35D740u;
            // 0x35d744: 0x86220000  lh          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35D840u;
            goto label_35d840;
        }
    }
    ctx->pc = 0x35D748u;
    // 0x35d748: 0x92040008  lbu         $a0, 0x8($s0)
    ctx->pc = 0x35d748u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35d74c: 0xc0d60a4  jal         func_358290
    ctx->pc = 0x35D74Cu;
    SET_GPR_U32(ctx, 31, 0x35D754u);
    ctx->pc = 0x35D750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D74Cu;
    // 0x35d750: 0x12a080  sll         $s4, $s2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358290u, 0x35D74Cu, 0x35D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D754u;
label_35d754:
    // 0x35d754: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x35d754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d758: 0x27b70090  addiu       $s7, $sp, 0x90
    ctx->pc = 0x35d758u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x35d75c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x35d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x35d760: 0x2f49821  addu        $s3, $s7, $s4
    ctx->pc = 0x35d760u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x35d764: 0xc0d5fca  jal         func_357F28
    ctx->pc = 0x35D764u;
    SET_GPR_U32(ctx, 31, 0x35D76Cu);
    ctx->pc = 0x35D768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D764u;
    // 0x35d768: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357F28u, 0x35D764u, 0x35D76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D76Cu;
label_35d76c:
    // 0x35d76c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x35D76Cu;
    {
        const bool branch_taken_0x35d76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D76Cu;
        // 0x35d770: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d76c) {
            ctx->pc = 0x35D7C0u;
            goto label_35d7c0;
        }
    }
    ctx->pc = 0x35D774u;
    // 0x35d774: 0x2791c7e0  addiu       $s1, $gp, -0x3820
    ctx->pc = 0x35d774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952928));
    // 0x35d778: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x35d778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x35d77c: 0x92030008  lbu         $v1, 0x8($s0)
    ctx->pc = 0x35d77cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35d780: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x35d780u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x35d784: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x35d784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d788: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35D788u;
    {
        const bool branch_taken_0x35d788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x35D78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D788u;
        // 0x35d78c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d788) {
            ctx->pc = 0x35D7A8u;
            goto label_35d7a8;
        }
    }
    ctx->pc = 0x35D790u;
    // 0x35d790: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x35d790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x35d794: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35d794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d798: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35D798u;
    SET_GPR_U32(ctx, 31, 0x35D7A0u);
    ctx->pc = 0x35D79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D798u;
    // 0x35d79c: 0x24445b80  addiu       $a0, $v0, 0x5B80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35D798u, 0x35D7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D7A0u;
label_35d7a0:
    // 0x35d7a0: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x35d7a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35d7a4: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x35d7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_35d7a8:
    // 0x35d7a8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x35d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x35d7ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35d7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d7b0: 0xc0d749c  jal         func_35D270
    ctx->pc = 0x35D7B0u;
    SET_GPR_U32(ctx, 31, 0x35D7B8u);
    ctx->pc = 0x35D7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D7B0u;
    // 0x35d7b4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D270u, 0x35D7B0u, 0x35D7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D7B8u;
label_35d7b8:
    // 0x35d7b8: 0x14400107  bnez        $v0, . + 4 + (0x107 << 2)
    ctx->pc = 0x35D7B8u;
    {
        const bool branch_taken_0x35d7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D7B8u;
        // 0x35d7bc: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d7b8) {
            ctx->pc = 0x35DBD8u;
            goto label_35dbd8;
        }
    }
    ctx->pc = 0x35D7C0u;
label_35d7c0:
    // 0x35d7c0: 0x2f42021  addu        $a0, $s7, $s4
    ctx->pc = 0x35d7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x35d7c4: 0x2d21021  addu        $v0, $s6, $s2
    ctx->pc = 0x35d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x35d7c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35d7cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x35d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x35d7d0: 0x3a28021  addu        $s0, $sp, $v0
    ctx->pc = 0x35d7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x35d7d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35d7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d7d8: 0xc46c0004  lwc1        $f12, 0x4($v1)
    ctx->pc = 0x35d7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35d7dc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x35d7dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x35d7e0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x35d7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d7e4: 0xc4740008  lwc1        $f20, 0x8($v1)
    ctx->pc = 0x35d7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35d7e8: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x35d7e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x35d7ec: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x35d7ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d7f0: 0x0  nop
    ctx->pc = 0x35d7f0u;
    // NOP
    // 0x35d7f4: 0x0  nop
    ctx->pc = 0x35d7f4u;
    // NOP
    // 0x35d7f8: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x35d7f8u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[21];
    // 0x35d7fc: 0x0  nop
    ctx->pc = 0x35d7fcu;
    // NOP
    // 0x35d800: 0x0  nop
    ctx->pc = 0x35d800u;
    // NOP
    // 0x35d804: 0x4615a503  div.s       $f20, $f20, $f21
    ctx->pc = 0x35d804u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[21];
    // 0x35d808: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x35d808u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x35d80c: 0xc0d8180  jal         func_360600
    ctx->pc = 0x35D80Cu;
    SET_GPR_U32(ctx, 31, 0x35D814u);
    ctx->pc = 0x35D810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D80Cu;
    // 0x35d810: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x360600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360600u, 0x35D80Cu, 0x35D814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D814u;
label_35d814:
    // 0x35d814: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x35d814u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d818: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35d818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d81c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35d81cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d820: 0xc0d8180  jal         func_360600
    ctx->pc = 0x35D820u;
    SET_GPR_U32(ctx, 31, 0x35D828u);
    ctx->pc = 0x35D824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D820u;
    // 0x35d824: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x360600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360600u, 0x35D820u, 0x35D828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D828u;
label_35d828:
    // 0x35d828: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35d828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d82c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35d82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d830: 0xc0d74b6  jal         func_35D2D8
    ctx->pc = 0x35D830u;
    SET_GPR_U32(ctx, 31, 0x35D838u);
    ctx->pc = 0x35D834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D830u;
    // 0x35d834: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2D8u, 0x35D830u, 0x35D838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D838u;
label_35d838:
    // 0x35d838: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x35D838u;
    {
        const bool branch_taken_0x35d838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d838) {
            ctx->pc = 0x35D86Cu;
            goto label_35d86c;
        }
    }
    ctx->pc = 0x35D840u;
label_35d840:
    // 0x35d840: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35D840u;
    {
        const bool branch_taken_0x35d840 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x35D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D840u;
        // 0x35d844: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d840) {
            ctx->pc = 0x35D874u;
            goto label_35d874;
        }
    }
    ctx->pc = 0x35D848u;
    // 0x35d848: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35d848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35d84c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35d84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d850: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35D850u;
    SET_GPR_U32(ctx, 31, 0x35D858u);
    ctx->pc = 0x35D854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D850u;
    // 0x35d854: 0x24845ba0  addiu       $a0, $a0, 0x5BA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35D850u, 0x35D858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D858u;
label_35d858:
    // 0x35d858: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35d858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35d85c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x35d85cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d860: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35d860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d864: 0xc0d749c  jal         func_35D270
    ctx->pc = 0x35D864u;
    SET_GPR_U32(ctx, 31, 0x35D86Cu);
    ctx->pc = 0x35D868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D864u;
    // 0x35d868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D270u, 0x35D864u, 0x35D86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D86Cu;
label_35d86c:
    // 0x35d86c: 0x144000da  bnez        $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x35D86Cu;
    {
        const bool branch_taken_0x35d86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D86Cu;
        // 0x35d870: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d86c) {
            ctx->pc = 0x35DBD8u;
            goto label_35dbd8;
        }
    }
    ctx->pc = 0x35D874u;
label_35d874:
    // 0x35d874: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x35d874u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d878: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x35d878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x35d87c: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
    ctx->pc = 0x35D87Cu;
    {
        const bool branch_taken_0x35d87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D87Cu;
        // 0x35d880: 0x12b0c0  sll         $s6, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d87c) {
            ctx->pc = 0x35D6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d6f0;
        }
    }
    ctx->pc = 0x35D884u;
    // 0x35d884: 0x97a20006  lhu         $v0, 0x6($sp)
    ctx->pc = 0x35d884u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x35d888: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x35D888u;
    {
        const bool branch_taken_0x35d888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D888u;
        // 0x35d88c: 0xaf80c7d8  sw          $zero, -0x3828($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952920), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d888) {
            ctx->pc = 0x35D900u;
            goto label_35d900;
        }
    }
    ctx->pc = 0x35D890u;
    // 0x35d890: 0x97a2004e  lhu         $v0, 0x4E($sp)
    ctx->pc = 0x35d890u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 78)));
    // 0x35d894: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x35D894u;
    {
        const bool branch_taken_0x35d894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D894u;
        // 0x35d898: 0x8fa40090  lw          $a0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d894) {
            ctx->pc = 0x35D900u;
            goto label_35d900;
        }
    }
    ctx->pc = 0x35D89Cu;
    // 0x35d89c: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x35d89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x35d8a0: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x35d8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35d8a4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x35d8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d8a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35d8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35d8ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x35d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35d8b0: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x35D8B0u;
    {
        const bool branch_taken_0x35d8b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x35D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D8B0u;
        // 0x35d8b4: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d8b0) {
            ctx->pc = 0x35D900u;
            goto label_35d900;
        }
    }
    ctx->pc = 0x35D8B8u;
    // 0x35d8b8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x35d8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35d8bc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x35d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x35d8c0: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x35D8C0u;
    {
        const bool branch_taken_0x35d8c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x35D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D8C0u;
        // 0x35d8c4: 0x3c02001d  lui         $v0, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d8c0) {
            ctx->pc = 0x35D904u;
            goto label_35d904;
        }
    }
    ctx->pc = 0x35D8C8u;
    // 0x35d8c8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x35d8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x35d8cc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x35d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x35d8d0: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35D8D0u;
    {
        const bool branch_taken_0x35d8d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x35D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D8D0u;
        // 0x35d8d4: 0x3c02001d  lui         $v0, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d8d0) {
            ctx->pc = 0x35D904u;
            goto label_35d904;
        }
    }
    ctx->pc = 0x35D8D8u;
    // 0x35d8d8: 0xc780968c  lwc1        $f0, -0x6974($gp)
    ctx->pc = 0x35d8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d8dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35d8dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35d8e0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x35D8E0u;
    {
        const bool branch_taken_0x35d8e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D8E0u;
        // 0x35d8e4: 0x3c03001d  lui         $v1, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d8e0) {
            ctx->pc = 0x35D908u;
            goto label_35d908;
        }
    }
    ctx->pc = 0x35D8E8u;
    // 0x35d8e8: 0xc7809690  lwc1        $f0, -0x6970($gp)
    ctx->pc = 0x35d8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d8ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x35d8ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35d8f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x35D8F0u;
    {
        const bool branch_taken_0x35d8f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35d8f0) {
            ctx->pc = 0x35D908u;
            goto label_35d908;
        }
    }
    ctx->pc = 0x35D8F8u;
    // 0x35d8f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d8fc: 0xaf82c7d8  sw          $v0, -0x3828($gp)
    ctx->pc = 0x35d8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952920), GPR_U32(ctx, 2));
label_35d900:
    // 0x35d900: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35d900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
label_35d904:
    // 0x35d904: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x35d904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
label_35d908:
    // 0x35d908: 0x24421378  addiu       $v0, $v0, 0x1378
    ctx->pc = 0x35d908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4984));
    // 0x35d90c: 0xdf85c7d0  ld          $a1, -0x3830($gp)
    ctx->pc = 0x35d90cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294952912)));
    // 0x35d910: 0x247527b8  addiu       $s5, $v1, 0x27B8
    ctx->pc = 0x35d910u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 10168));
    // 0x35d914: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35d914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d918: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x35d918u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d91c: 0x27b600f0  addiu       $s6, $sp, 0xF0
    ctx->pc = 0x35d91cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x35d920: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x35d920u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x35d924: 0x3c170048  lui         $s7, 0x48
    ctx->pc = 0x35d924u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
label_35d928:
    // 0x35d928: 0x2451017  dsrav       $v0, $a1, $s2
    ctx->pc = 0x35d928u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 5) >> (GPR_U32(ctx, 18) & 0x3F));
    // 0x35d92c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35d92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35d930: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35d930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35d934: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35d934u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35d938: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x35D938u;
    {
        const bool branch_taken_0x35d938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D938u;
        // 0x35d93c: 0x27b300a0  addiu       $s3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d938) {
            ctx->pc = 0x35DA20u;
            goto label_35da20;
        }
    }
    ctx->pc = 0x35D940u;
    // 0x35d940: 0x92240005  lbu         $a0, 0x5($s1)
    ctx->pc = 0x35d940u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x35d944: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x35d944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d948: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x35d948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x35d94c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x35d94cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x35d950: 0xc0d6062  jal         func_358188
    ctx->pc = 0x35D950u;
    SET_GPR_U32(ctx, 31, 0x35D958u);
    ctx->pc = 0x35D954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D950u;
    // 0x35d954: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358188u, 0x35D950u, 0x35D958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D958u;
label_35d958:
    // 0x35d958: 0x1440009f  bnez        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x35D958u;
    {
        const bool branch_taken_0x35d958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D958u;
        // 0x35d95c: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d958) {
            ctx->pc = 0x35DBD8u;
            goto label_35dbd8;
        }
    }
    ctx->pc = 0x35D960u;
    // 0x35d960: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x35d960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x35d964: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35d964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35d968: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35d968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35d96c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35D96Cu;
    {
        const bool branch_taken_0x35d96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D96Cu;
        // 0x35d970: 0x97a200a6  lhu         $v0, 0xA6($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 166)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d96c) {
            ctx->pc = 0x35D988u;
            goto label_35d988;
        }
    }
    ctx->pc = 0x35D974u;
    // 0x35d974: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35D974u;
    {
        const bool branch_taken_0x35d974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d974) {
            ctx->pc = 0x35D978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35D974u;
            // 0x35d978: 0x86030024  lh          $v1, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35D98Cu;
            goto label_35d98c;
        }
    }
    ctx->pc = 0x35D97Cu;
    // 0x35d97c: 0x92250005  lbu         $a1, 0x5($s1)
    ctx->pc = 0x35d97cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x35d980: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35D980u;
    SET_GPR_U32(ctx, 31, 0x35D988u);
    ctx->pc = 0x35D984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D980u;
    // 0x35d984: 0x26e45bc0  addiu       $a0, $s7, 0x5BC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 23488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35D980u, 0x35D988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D988u;
label_35d988:
    // 0x35d988: 0x86030024  lh          $v1, 0x24($s0)
    ctx->pc = 0x35d988u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_35d98c:
    // 0x35d98c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35d990: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35D990u;
    {
        const bool branch_taken_0x35d990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35d990) {
            ctx->pc = 0x35D994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35D990u;
            // 0x35d994: 0x92020001  lbu         $v0, 0x1($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35D9BCu;
            goto label_35d9bc;
        }
    }
    ctx->pc = 0x35D998u;
    // 0x35d998: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x35d998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x35d99c: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x35d99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x35d9a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x35d9a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35d9a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35d9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35d9a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35d9a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35d9ac: 0x0  nop
    ctx->pc = 0x35d9acu;
    // NOP
    // 0x35d9b0: 0x0  nop
    ctx->pc = 0x35d9b0u;
    // NOP
    // 0x35d9b4: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x35d9b4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
    // 0x35d9b8: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x35d9b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_35d9bc:
    // 0x35d9bc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x35D9BCu;
    {
        const bool branch_taken_0x35d9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D9BCu;
        // 0x35d9c0: 0xdf85c7d0  ld          $a1, -0x3830($gp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294952912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d9bc) {
            ctx->pc = 0x35DA20u;
            goto label_35da20;
        }
    }
    ctx->pc = 0x35D9C4u;
    // 0x35d9c4: 0x92020026  lbu         $v0, 0x26($s0)
    ctx->pc = 0x35d9c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x35d9c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35D9C8u;
    {
        const bool branch_taken_0x35d9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D9C8u;
        // 0x35d9cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d9c8) {
            ctx->pc = 0x35D9F0u;
            goto label_35d9f0;
        }
    }
    ctx->pc = 0x35D9D0u;
    // 0x35d9d0: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x35d9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35d9d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35d9d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35d9d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x35d9d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35d9dc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x35D9DCu;
    {
        const bool branch_taken_0x35d9dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D9DCu;
        // 0x35d9e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d9dc) {
            ctx->pc = 0x35D9F4u;
            goto label_35d9f4;
        }
    }
    ctx->pc = 0x35D9E4u;
    // 0x35d9e4: 0xc0d8540  jal         func_361500
    ctx->pc = 0x35D9E4u;
    SET_GPR_U32(ctx, 31, 0x35D9ECu);
    ctx->pc = 0x35D9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D9E4u;
    // 0x35d9e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361500u, 0x35D9E4u, 0x35D9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D9ECu;
label_35d9ec:
    // 0x35d9ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35d9ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_35d9f0:
    // 0x35d9f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x35d9f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35d9f4:
    // 0x35d9f4: 0xc0d729a  jal         func_35CA68
    ctx->pc = 0x35D9F4u;
    SET_GPR_U32(ctx, 31, 0x35D9FCu);
    ctx->pc = 0x35D9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D9F4u;
    // 0x35d9f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CA68u, 0x35D9F4u, 0x35D9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D9FCu;
label_35d9fc:
    // 0x35d9fc: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x35d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x35da00: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x35da00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35da04: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x35da04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x35da08: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x35da08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x35da0c: 0xc0d6f3a  jal         func_35BCE8
    ctx->pc = 0x35DA0Cu;
    SET_GPR_U32(ctx, 31, 0x35DA14u);
    ctx->pc = 0x35DA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DA0Cu;
    // 0x35da10: 0xa3b200f8  sb          $s2, 0xF8($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 248), (uint8_t)GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BCE8u, 0x35DA0Cu, 0x35DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DA14u;
label_35da14:
    // 0x35da14: 0xc0d6f0c  jal         func_35BC30
    ctx->pc = 0x35DA14u;
    SET_GPR_U32(ctx, 31, 0x35DA1Cu);
    ctx->pc = 0x35DA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DA14u;
    // 0x35da18: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BC30u, 0x35DA14u, 0x35DA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DA1Cu;
label_35da1c:
    // 0x35da1c: 0xdf85c7d0  ld          $a1, -0x3830($gp)
    ctx->pc = 0x35da1cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294952912)));
label_35da20:
    // 0x35da20: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x35da20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x35da24: 0x2694006c  addiu       $s4, $s4, 0x6C
    ctx->pc = 0x35da24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
    // 0x35da28: 0x2a420030  slti        $v0, $s2, 0x30
    ctx->pc = 0x35da28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x35da2c: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x35da2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x35da30: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x35DA30u;
    {
        const bool branch_taken_0x35da30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DA30u;
        // 0x35da34: 0x2631006c  addiu       $s1, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35da30) {
            ctx->pc = 0x35D928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d928;
        }
    }
    ctx->pc = 0x35DA38u;
    // 0x35da38: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35da38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35da3c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x35da3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35da40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x35da40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35da44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35da44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35da48: 0x24451378  addiu       $a1, $v0, 0x1378
    ctx->pc = 0x35da48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4984));
    // 0x35da4c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x35da4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35da50:
    // 0x35da50: 0x2471017  dsrav       $v0, $a3, $s2
    ctx->pc = 0x35da50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 7) >> (GPR_U32(ctx, 18) & 0x3F));
    // 0x35da54: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x35da54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x35da58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35da58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35da5c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35da5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35da60: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x35DA60u;
    {
        const bool branch_taken_0x35da60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35da60) {
            ctx->pc = 0x35DA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DA60u;
            // 0x35da64: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DAB0u;
            goto label_35dab0;
        }
    }
    ctx->pc = 0x35DA68u;
    // 0x35da68: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x35da68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35da6c: 0x304400fe  andi        $a0, $v0, 0xFE
    ctx->pc = 0x35da6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x35da70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35da70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35da74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35da74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35da78: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35DA78u;
    {
        const bool branch_taken_0x35da78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DA78u;
        // 0x35da7c: 0x2461814  dsllv       $v1, $a2, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (GPR_U32(ctx, 18) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35da78) {
            ctx->pc = 0x35DAACu;
            goto label_35daac;
        }
    }
    ctx->pc = 0x35DA80u;
    // 0x35da80: 0x84a20024  lh          $v0, 0x24($a1)
    ctx->pc = 0x35da80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x35da84: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x35da84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35da88: 0x10480005  beq         $v0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35DA88u;
    {
        const bool branch_taken_0x35da88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x35DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DA88u;
        // 0x35da8c: 0x3c3f025  or          $fp, $fp, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35da88) {
            ctx->pc = 0x35DAA0u;
            goto label_35daa0;
        }
    }
    ctx->pc = 0x35DA90u;
    // 0x35da90: 0xdfa20110  ld          $v0, 0x110($sp)
    ctx->pc = 0x35da90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x35da94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x35da94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35da98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35DA98u;
    {
        const bool branch_taken_0x35da98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DA98u;
        // 0x35da9c: 0xffa20110  sd          $v0, 0x110($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35da98) {
            ctx->pc = 0x35DAACu;
            goto label_35daac;
        }
    }
    ctx->pc = 0x35DAA0u;
label_35daa0:
    // 0x35daa0: 0xdfa20118  ld          $v0, 0x118($sp)
    ctx->pc = 0x35daa0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x35daa4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x35daa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35daa8: 0xffa20118  sd          $v0, 0x118($sp)
    ctx->pc = 0x35daa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 2));
label_35daac:
    // 0x35daac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x35daacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_35dab0:
    // 0x35dab0: 0x2a420030  slti        $v0, $s2, 0x30
    ctx->pc = 0x35dab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x35dab4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x35DAB4u;
    {
        const bool branch_taken_0x35dab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DAB4u;
        // 0x35dab8: 0x24a5006c  addiu       $a1, $a1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dab4) {
            ctx->pc = 0x35DA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35da50;
        }
    }
    ctx->pc = 0x35DABCu;
    // 0x35dabc: 0xdfa20118  ld          $v0, 0x118($sp)
    ctx->pc = 0x35dabcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x35dac0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x35DAC0u;
    {
        const bool branch_taken_0x35dac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dac0) {
            ctx->pc = 0x35DAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DAC0u;
            // 0x35dac4: 0xdfa20110  ld          $v0, 0x110($sp) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DAD4u;
            goto label_35dad4;
        }
    }
    ctx->pc = 0x35DAC8u;
    // 0x35dac8: 0xc0d7482  jal         func_35D208
    ctx->pc = 0x35DAC8u;
    SET_GPR_U32(ctx, 31, 0x35DAD0u);
    ctx->pc = 0x35DACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DAC8u;
    // 0x35dacc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D208u, 0x35DAC8u, 0x35DAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DAD0u;
label_35dad0:
    // 0x35dad0: 0xdfa20110  ld          $v0, 0x110($sp)
    ctx->pc = 0x35dad0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_35dad4:
    // 0x35dad4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35DAD4u;
    {
        const bool branch_taken_0x35dad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dad4) {
            ctx->pc = 0x35DAE4u;
            goto label_35dae4;
        }
    }
    ctx->pc = 0x35DADCu;
    // 0x35dadc: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x35DADCu;
    SET_GPR_U32(ctx, 31, 0x35DAE4u);
    ctx->pc = 0x35DAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DADCu;
    // 0x35dae0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x35DADCu, 0x35DAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DAE4u;
label_35dae4:
    // 0x35dae4: 0x13c00011  beqz        $fp, . + 4 + (0x11 << 2)
    ctx->pc = 0x35DAE4u;
    {
        const bool branch_taken_0x35dae4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DAE4u;
        // 0x35dae8: 0x1e163b  dsra        $v0, $fp, 24 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 30) >> 24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dae4) {
            ctx->pc = 0x35DB2Cu;
            goto label_35db2c;
        }
    }
    ctx->pc = 0x35DAECu;
    // 0x35daec: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x35daecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x35daf0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x35daf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x35daf4: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x35daf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x35daf8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x35daf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x35dafc: 0x3c31824  and         $v1, $fp, $v1
    ctx->pc = 0x35dafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & GPR_U64(ctx, 3));
    // 0x35db00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35db00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35db04: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35db04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35db08: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x35db08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x35db0c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35db0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x35db10: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x35db10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x35db14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35db14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35db18: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x35db18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
    // 0x35db1c: 0xc0d6f3a  jal         func_35BCE8
    ctx->pc = 0x35DB1Cu;
    SET_GPR_U32(ctx, 31, 0x35DB24u);
    ctx->pc = 0x35DB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DB1Cu;
    // 0x35db20: 0xafa20098  sw          $v0, 0x98($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BCE8u, 0x35DB1Cu, 0x35DB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DB24u;
label_35db24:
    // 0x35db24: 0xc0d6ee8  jal         func_35BBA0
    ctx->pc = 0x35DB24u;
    SET_GPR_U32(ctx, 31, 0x35DB2Cu);
    ctx->pc = 0x35DB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DB24u;
    // 0x35db28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BBA0u, 0x35DB24u, 0x35DB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DB2Cu;
label_35db2c:
    // 0x35db2c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35db30: 0xdf86c7d0  ld          $a2, -0x3830($gp)
    ctx->pc = 0x35db30u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294952912)));
    // 0x35db34: 0x24441378  addiu       $a0, $v0, 0x1378
    ctx->pc = 0x35db34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4984));
    // 0x35db38: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x35db38u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35db3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x35db3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35db40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35db40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35db44: 0x0  nop
    ctx->pc = 0x35db44u;
    // NOP
label_35db48:
    // 0x35db48: 0x2461017  dsrav       $v0, $a2, $s2
    ctx->pc = 0x35db48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 6) >> (GPR_U32(ctx, 18) & 0x3F));
    // 0x35db4c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x35db4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x35db50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35db50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35db54: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35db54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35db58: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x35DB58u;
    {
        const bool branch_taken_0x35db58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35db58) {
            ctx->pc = 0x35DB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DB58u;
            // 0x35db5c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DB80u;
            goto label_35db80;
        }
    }
    ctx->pc = 0x35DB60u;
    // 0x35db60: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x35db60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35db64: 0x304300fb  andi        $v1, $v0, 0xFB
    ctx->pc = 0x35db64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x35db68: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x35db68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x35db6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35DB6Cu;
    {
        const bool branch_taken_0x35db6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB6Cu;
        // 0x35db70: 0x2451014  dsllv       $v0, $a1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (GPR_U32(ctx, 18) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35db6c) {
            ctx->pc = 0x35DB7Cu;
            goto label_35db7c;
        }
    }
    ctx->pc = 0x35DB74u;
    // 0x35db74: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x35db74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35db78: 0x3c2f025  or          $fp, $fp, $v0
    ctx->pc = 0x35db78u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
label_35db7c:
    // 0x35db7c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x35db7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_35db80:
    // 0x35db80: 0x2a420030  slti        $v0, $s2, 0x30
    ctx->pc = 0x35db80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x35db84: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x35DB84u;
    {
        const bool branch_taken_0x35db84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB84u;
        // 0x35db88: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35db84) {
            ctx->pc = 0x35DB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35db48;
        }
    }
    ctx->pc = 0x35DB8Cu;
    // 0x35db8c: 0x13c00011  beqz        $fp, . + 4 + (0x11 << 2)
    ctx->pc = 0x35DB8Cu;
    {
        const bool branch_taken_0x35db8c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB8Cu;
        // 0x35db90: 0x1e163b  dsra        $v0, $fp, 24 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 30) >> 24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35db8c) {
            ctx->pc = 0x35DBD4u;
            goto label_35dbd4;
        }
    }
    ctx->pc = 0x35DB94u;
    // 0x35db94: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x35db94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x35db98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x35db98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x35db9c: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x35db9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x35dba0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x35dba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x35dba4: 0x3c31824  and         $v1, $fp, $v1
    ctx->pc = 0x35dba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & GPR_U64(ctx, 3));
    // 0x35dba8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35dba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35dbac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35dbacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35dbb0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x35dbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x35dbb4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35dbb4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x35dbb8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x35dbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x35dbbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35dbbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dbc0: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x35dbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x35dbc4: 0xc0d6f3a  jal         func_35BCE8
    ctx->pc = 0x35DBC4u;
    SET_GPR_U32(ctx, 31, 0x35DBCCu);
    ctx->pc = 0x35DBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DBC4u;
    // 0x35dbc8: 0xafa200a8  sw          $v0, 0xA8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BCE8u, 0x35DBC4u, 0x35DBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DBCCu;
label_35dbcc:
    // 0x35dbcc: 0xc0d6ee8  jal         func_35BBA0
    ctx->pc = 0x35DBCCu;
    SET_GPR_U32(ctx, 31, 0x35DBD4u);
    ctx->pc = 0x35DBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DBCCu;
    // 0x35dbd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BBA0u, 0x35DBCCu, 0x35DBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DBD4u;
label_35dbd4:
    // 0x35dbd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35dbd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35dbd8:
    // 0x35dbd8: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x35dbd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x35dbdc: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x35dbdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x35dbe0: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x35dbe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x35dbe4: 0xdfb30138  ld          $s3, 0x138($sp)
    ctx->pc = 0x35dbe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x35dbe8: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x35dbe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x35dbec: 0xdfb50148  ld          $s5, 0x148($sp)
    ctx->pc = 0x35dbecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x35dbf0: 0xdfb60150  ld          $s6, 0x150($sp)
    ctx->pc = 0x35dbf0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x35dbf4: 0xdfb70158  ld          $s7, 0x158($sp)
    ctx->pc = 0x35dbf4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x35dbf8: 0xdfbe0160  ld          $fp, 0x160($sp)
    ctx->pc = 0x35dbf8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x35dbfc: 0xdfbf0168  ld          $ra, 0x168($sp)
    ctx->pc = 0x35dbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x35dc00: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x35dc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x35dc04: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x35dc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35dc08: 0x3e00008  jr          $ra
    ctx->pc = 0x35DC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DC08u;
        // 0x35dc0c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DC10u;
}
