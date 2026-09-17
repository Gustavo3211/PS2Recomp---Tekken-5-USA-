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

// Function: sub_0024D760
// Address: 0x24d760 - 0x24d888
void sub_0024D760_0x24d760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D760_0x24d760");
#endif

    switch (ctx->pc) {
        case 0x24d780u: goto label_24d780;
        case 0x24d790u: goto label_24d790;
        default: break;
    }

    ctx->pc = 0x24d760u;

    // 0x24d760: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x24d760u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24d764: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24d764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24d768: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x24D768u;
    {
        const bool branch_taken_0x24d768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D768u;
        // 0x24d76c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d768) {
            ctx->pc = 0x24D7F8u;
            goto label_24d7f8;
        }
    }
    ctx->pc = 0x24D770u;
    // 0x24d770: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x24d770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x24d774: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x24d774u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d778: 0x18a0001e  blez        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x24D778u;
    {
        const bool branch_taken_0x24d778 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x24D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D778u;
        // 0x24d77c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d778) {
            ctx->pc = 0x24D7F4u;
            goto label_24d7f4;
        }
    }
    ctx->pc = 0x24D780u;
label_24d780:
    // 0x24d780: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x24d780u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d784: 0x254b0008  addiu       $t3, $t2, 0x8
    ctx->pc = 0x24d784u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x24d788: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x24d788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d78c: 0x0  nop
    ctx->pc = 0x24d78cu;
    // NOP
label_24d790:
    // 0x24d790: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24D790u;
    {
        const bool branch_taken_0x24d790 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D790u;
        // 0x24d794: 0x8d480004  lw          $t0, 0x4($t2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d790) {
            ctx->pc = 0x24D7A8u;
            goto label_24d7a8;
        }
    }
    ctx->pc = 0x24D798u;
    // 0x24d798: 0x8ce90004  lw          $t1, 0x4($a3)
    ctx->pc = 0x24d798u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x24d79c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24D79Cu;
    {
        const bool branch_taken_0x24d79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D79Cu;
        // 0x24d7a0: 0x109102b  sltu        $v0, $t0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d79c) {
            ctx->pc = 0x24D7B0u;
            goto label_24d7b0;
        }
    }
    ctx->pc = 0x24D7A4u;
    // 0x24d7a4: 0x0  nop
    ctx->pc = 0x24d7a4u;
    // NOP
label_24d7a8:
    // 0x24d7a8: 0x8ce90004  lw          $t1, 0x4($a3)
    ctx->pc = 0x24d7a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x24d7ac: 0x128102b  sltu        $v0, $t1, $t0
    ctx->pc = 0x24d7acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_24d7b0:
    // 0x24d7b0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x24D7B0u;
    {
        const bool branch_taken_0x24d7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d7b0) {
            ctx->pc = 0x24D7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D7B0u;
            // 0x24d7b4: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D7E8u;
            goto label_24d7e8;
        }
    }
    ctx->pc = 0x24D7B8u;
    // 0x24d7b8: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x24d7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x24d7bc: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x24d7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x24d7c0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x24d7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x24d7c4: 0xad490004  sw          $t1, 0x4($t2)
    ctx->pc = 0x24d7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 9));
    // 0x24d7c8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x24d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24d7cc: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x24d7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x24d7d0: 0xace80004  sw          $t0, 0x4($a3)
    ctx->pc = 0x24d7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 8));
    // 0x24d7d4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x24d7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x24d7d8: 0x24e7fff8  addiu       $a3, $a3, -0x8
    ctx->pc = 0x24d7d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x24d7dc: 0x14e4ffec  bne         $a3, $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x24D7DCu;
    {
        const bool branch_taken_0x24d7dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x24D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7DCu;
        // 0x24d7e0: 0x254afff8  addiu       $t2, $t2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d7dc) {
            ctx->pc = 0x24D790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d790;
        }
    }
    ctx->pc = 0x24D7E4u;
    // 0x24d7e4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x24d7e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_24d7e8:
    // 0x24d7e8: 0x185102a  slt         $v0, $t4, $a1
    ctx->pc = 0x24d7e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x24d7ec: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x24D7ECu;
    {
        const bool branch_taken_0x24d7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7ECu;
        // 0x24d7f0: 0x160182d  daddu       $v1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d7ec) {
            ctx->pc = 0x24D780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d780;
        }
    }
    ctx->pc = 0x24D7F4u;
label_24d7f4:
    // 0x24d7f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24d7f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d7f8:
    // 0x24d7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x24D7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7F8u;
        // 0x24d7fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D800u;
    // 0x24d800: 0x44076000  mfc1        $a3, $f12
    ctx->pc = 0x24d800u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x24d804: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24d804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d808: 0x72dc2  srl         $a1, $a3, 23
    ctx->pc = 0x24d808u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 23));
    // 0x24d80c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x24d80cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x24d810: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x24D810u;
    {
        const bool branch_taken_0x24d810 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D810u;
        // 0x24d814: 0x2ca8007f  sltiu       $t0, $a1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d810) {
            ctx->pc = 0x24D874u;
            goto label_24d874;
        }
    }
    ctx->pc = 0x24D818u;
    // 0x24d818: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x24d818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x24d81c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x24d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x24d820: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24d820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24d824: 0x240401ff  addiu       $a0, $zero, 0x1FF
    ctx->pc = 0x24d824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x24d828: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x24d828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x24d82c: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x24d82cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24d830: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x24d830u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x24d834: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24D834u;
    {
        const bool branch_taken_0x24d834 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D834u;
        // 0x24d838: 0xc43025  or          $a2, $a2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d834) {
            ctx->pc = 0x24D850u;
            goto label_24d850;
        }
    }
    ctx->pc = 0x24D83Cu;
    // 0x24d83c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x24d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x24d840: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x24d840u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24d844: 0x463016  dsrlv       $a2, $a2, $v0
    ctx->pc = 0x24d844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (GPR_U32(ctx, 2) & 0x3F));
    // 0x24d848: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24D848u;
    {
        const bool branch_taken_0x24d848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D848u;
        // 0x24d84c: 0x64c60001  daddiu      $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d848) {
            ctx->pc = 0x24D874u;
            goto label_24d874;
        }
    }
    ctx->pc = 0x24D850u;
label_24d850:
    // 0x24d850: 0x24a3ff81  addiu       $v1, $a1, -0x7F
    ctx->pc = 0x24d850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967169));
    // 0x24d854: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x24d854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x24d858: 0x28640021  slti        $a0, $v1, 0x21
    ctx->pc = 0x24d858u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x24d85c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d860: 0xa4180a  movz        $v1, $a1, $a0
    ctx->pc = 0x24d860u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x24d864: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x24d864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x24d868: 0x663014  dsllv       $a2, $a2, $v1
    ctx->pc = 0x24d868u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x24d86c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24d870: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x24d870u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_24d874:
    // 0x24d874: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x24d874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x24d878: 0x6102f  dsubu       $v0, $zero, $a2
    ctx->pc = 0x24d878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x24d87c: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x24d87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x24d880: 0x3e00008  jr          $ra
    ctx->pc = 0x24D880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D880u;
        // 0x24d884: 0xc3100a  movz        $v0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D888u;
}
