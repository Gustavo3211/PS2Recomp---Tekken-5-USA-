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

// Function: sub_002988B8
// Address: 0x2988b8 - 0x298978
void sub_002988B8_0x2988b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002988B8_0x2988b8");
#endif

    switch (ctx->pc) {
        case 0x298900u: goto label_298900;
        case 0x29890cu: goto label_29890c;
        case 0x298944u: goto label_298944;
        case 0x298950u: goto label_298950;
        case 0x29896cu: goto label_29896c;
        default: break;
    }

    ctx->pc = 0x2988b8u;

    // 0x2988b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2988b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2988bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2988bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2988c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2988c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2988c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2988c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2988c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2988c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2988cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2988ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2988d0: 0x14a2002b  bne         $a1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2988D0u;
    {
        const bool branch_taken_0x2988d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2988D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988D0u;
        // 0x2988d4: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988d0) {
            ctx->pc = 0x298980u;
            return;
        }
    }
    ctx->pc = 0x2988D8u;
    // 0x2988d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2988d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2988dc: 0x16420012  bne         $s2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2988DCu;
    {
        const bool branch_taken_0x2988dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2988E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988DCu;
        // 0x2988e0: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988dc) {
            ctx->pc = 0x298928u;
            goto label_298928;
        }
    }
    ctx->pc = 0x2988E4u;
    // 0x2988e4: 0x2450751c  addiu       $s0, $v0, 0x751C
    ctx->pc = 0x2988e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29980));
    // 0x2988e8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2988e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2988ec: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x2988ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2988f0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2988f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2988f4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2988f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2988f8: 0xc0a9e26  jal         func_2A7898
    ctx->pc = 0x2988F8u;
    SET_GPR_U32(ctx, 31, 0x298900u);
    ctx->pc = 0x2988FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2988F8u;
    // 0x2988fc: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7898u, 0x2988F8u, 0x298900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298900u;
label_298900:
    // 0x298900: 0x26110068  addiu       $s1, $s0, 0x68
    ctx->pc = 0x298900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x298904: 0xc0a9e26  jal         func_2A7898
    ctx->pc = 0x298904u;
    SET_GPR_U32(ctx, 31, 0x29890Cu);
    ctx->pc = 0x298908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298904u;
    // 0x298908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7898u, 0x298904u, 0x29890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29890Cu;
label_29890c:
    // 0x29890c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29890cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x298910: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x298910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298914: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x298914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x298918: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x298918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x29891c: 0xe62000b8  swc1        $f0, 0xB8($s1)
    ctx->pc = 0x29891cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
    // 0x298920: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x298920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
    // 0x298924: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x298924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_298928:
    // 0x298928: 0x16400016  bnez        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x298928u;
    {
        const bool branch_taken_0x298928 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x29892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298928u;
        // 0x29892c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298928) {
            ctx->pc = 0x298984u;
            return;
        }
    }
    ctx->pc = 0x298930u;
    // 0x298930: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x298930u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x298934: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x298934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x298938: 0x26107584  addiu       $s0, $s0, 0x7584
    ctx->pc = 0x298938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30084));
    // 0x29893c: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x29893Cu;
    SET_GPR_U32(ctx, 31, 0x298944u);
    ctx->pc = 0x298940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29893Cu;
    // 0x298940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x29893Cu, 0x298944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298944u;
label_298944:
    // 0x298944: 0x2604ffac  addiu       $a0, $s0, -0x54
    ctx->pc = 0x298944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967212));
    // 0x298948: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x298948u;
    SET_GPR_U32(ctx, 31, 0x298950u);
    ctx->pc = 0x29894Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298948u;
    // 0x29894c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x298948u, 0x298950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298950u;
label_298950:
    // 0x298950: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x298950u;
    {
        const bool branch_taken_0x298950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298950u;
        // 0x298954: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298950) {
            ctx->pc = 0x298984u;
            return;
        }
    }
    ctx->pc = 0x298958u;
    // 0x298958: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x298958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x29895c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29895cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x298960: 0x24847500  addiu       $a0, $a0, 0x7500
    ctx->pc = 0x298960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29952));
    // 0x298964: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x298964u;
    SET_GPR_U32(ctx, 31, 0x29896Cu);
    ctx->pc = 0x298968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298964u;
    // 0x298968: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x298964u, 0x29896Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29896Cu;
label_29896c:
    // 0x29896c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x29896cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x298970: 0xc048b90  jal         func_122E40
    ctx->pc = 0x298970u;
    SET_GPR_U32(ctx, 31, 0x298978u);
    ctx->pc = 0x298974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298970u;
    // 0x298974: 0x2484ff64  addiu       $a0, $a0, -0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x298970u, 0x298978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298978u;
}
