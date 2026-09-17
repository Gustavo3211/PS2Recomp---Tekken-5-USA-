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

// Function: sub_00256FE0
// Address: 0x256fe0 - 0x257240
void sub_00256FE0_0x256fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256FE0_0x256fe0");
#endif

    switch (ctx->pc) {
        case 0x25701cu: goto label_25701c;
        default: break;
    }

    ctx->pc = 0x256fe0u;

    // 0x256fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x256fe4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x256fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x256fe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x256fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256fec: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x256fecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x256ff0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x256ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x256ff4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x256ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x256ff8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x256ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256ffc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x256ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x257000: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x257000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x257004: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x257004u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x257008: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x257008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x25700c: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x25700cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x257010: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x257010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257014: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x257014u;
    SET_GPR_U32(ctx, 31, 0x25701Cu);
    ctx->pc = 0x257018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257014u;
    // 0x257018: 0x108180  sll         $s0, $s0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x257014u, 0x25701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25701Cu;
label_25701c:
    // 0x25701c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x25701cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x257020: 0x504021  addu        $t0, $v0, $s0
    ctx->pc = 0x257020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x257024: 0x8d020034  lw          $v0, 0x34($t0)
    ctx->pc = 0x257024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x257028: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x257028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25702c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x25702cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x257030: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x257030u;
    {
        const bool branch_taken_0x257030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257030u;
        // 0x257034: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257030) {
            ctx->pc = 0x257228u;
            goto label_257228;
        }
    }
    ctx->pc = 0x257038u;
    // 0x257038: 0x58400051  blezl       $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x257038u;
    {
        const bool branch_taken_0x257038 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x257038) {
            ctx->pc = 0x25703Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257038u;
            // 0x25703c: 0x86430042  lh          $v1, 0x42($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257180u;
            goto label_257180;
        }
    }
    ctx->pc = 0x257040u;
    // 0x257040: 0x26260054  addiu       $a2, $s1, 0x54
    ctx->pc = 0x257040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
    // 0x257044: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x257044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x257048: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x257048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25704c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25704cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x257050: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x257050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x257054: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x257054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x257058: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x257058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x25705c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x25705cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x257060: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x257060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x257064: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x257064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x257068: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x257068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25706c: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x25706cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x257070: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x257070u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x257074: 0x86440042  lh          $a0, 0x42($s2)
    ctx->pc = 0x257074u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
    // 0x257078: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x257078u;
    {
        const bool branch_taken_0x257078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x25707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257078u;
        // 0x25707c: 0x824708b7  lb          $a3, 0x8B7($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2231)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257078) {
            ctx->pc = 0x2570D8u;
            goto label_2570d8;
        }
    }
    ctx->pc = 0x257080u;
    // 0x257080: 0x28820012  slti        $v0, $a0, 0x12
    ctx->pc = 0x257080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x257084: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x257084u;
    {
        const bool branch_taken_0x257084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257084u;
        // 0x257088: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257084) {
            ctx->pc = 0x2570A0u;
            goto label_2570a0;
        }
    }
    ctx->pc = 0x25708Cu;
    // 0x25708c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x25708cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x257090: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x257090u;
    {
        const bool branch_taken_0x257090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x257094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257090u;
        // 0x257094: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257090) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x257098u;
    // 0x257098: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x257098u;
    {
        const bool branch_taken_0x257098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257098u;
        // 0x25709c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257098) {
            ctx->pc = 0x257230u;
            goto label_257230;
        }
    }
    ctx->pc = 0x2570A0u;
label_2570a0:
    // 0x2570a0: 0x1082001d  beq         $a0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2570A0u;
    {
        const bool branch_taken_0x2570a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2570A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2570A0u;
        // 0x2570a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2570a0) {
            ctx->pc = 0x257118u;
            goto label_257118;
        }
    }
    ctx->pc = 0x2570A8u;
    // 0x2570a8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2570A8u;
    {
        const bool branch_taken_0x2570a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2570ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2570A8u;
        // 0x2570ac: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2570a8) {
            ctx->pc = 0x257230u;
            goto label_257230;
        }
    }
    ctx->pc = 0x2570B0u;
label_2570b0:
    // 0x2570b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2570b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2570b4: 0x50e20006  beql        $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2570B4u;
    {
        const bool branch_taken_0x2570b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x2570b4) {
            ctx->pc = 0x2570B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2570B4u;
            // 0x2570b8: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2570D0u;
            goto label_2570d0;
        }
    }
    ctx->pc = 0x2570BCu;
    // 0x2570bc: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2570bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2570c0: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x2570c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2570c4: 0x24421f20  addiu       $v0, $v0, 0x1F20
    ctx->pc = 0x2570c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7968));
    // 0x2570c8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2570C8u;
    {
        const bool branch_taken_0x2570c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2570CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2570C8u;
        // 0x2570cc: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2570c8) {
            ctx->pc = 0x257130u;
            goto label_257130;
        }
    }
    ctx->pc = 0x2570D0u;
label_2570d0:
    // 0x2570d0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2570D0u;
    {
        const bool branch_taken_0x2570d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2570D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2570D0u;
        // 0x2570d4: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2570d0) {
            ctx->pc = 0x257168u;
            goto label_257168;
        }
    }
    ctx->pc = 0x2570D8u;
label_2570d8:
    // 0x2570d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2570d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2570dc: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2570DCu;
    {
        const bool branch_taken_0x2570dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2570E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2570DCu;
        // 0x2570e0: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2570dc) {
            ctx->pc = 0x2570F8u;
            goto label_2570f8;
        }
    }
    ctx->pc = 0x2570E4u;
    // 0x2570e4: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x2570e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2570e8: 0x24421fa0  addiu       $v0, $v0, 0x1FA0
    ctx->pc = 0x2570e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8096));
    // 0x2570ec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2570ECu;
    {
        const bool branch_taken_0x2570ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2570F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2570ECu;
        // 0x2570f0: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2570ec) {
            ctx->pc = 0x257130u;
            goto label_257130;
        }
    }
    ctx->pc = 0x2570F4u;
    // 0x2570f4: 0x0  nop
    ctx->pc = 0x2570f4u;
    // NOP
label_2570f8:
    // 0x2570f8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2570f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2570fc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2570fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x257100: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x257100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x257104: 0xad020010  sw          $v0, 0x10($t0)
    ctx->pc = 0x257104u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
    // 0x257108: 0xad03001c  sw          $v1, 0x1C($t0)
    ctx->pc = 0x257108u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 3));
    // 0x25710c: 0xad040014  sw          $a0, 0x14($t0)
    ctx->pc = 0x25710cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 4));
    // 0x257110: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x257110u;
    {
        const bool branch_taken_0x257110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257110u;
        // 0x257114: 0xad000018  sw          $zero, 0x18($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257110) {
            ctx->pc = 0x257228u;
            goto label_257228;
        }
    }
    ctx->pc = 0x257118u;
label_257118:
    // 0x257118: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x257118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25711c: 0x10e20010  beq         $a3, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25711Cu;
    {
        const bool branch_taken_0x25711c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x257120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25711Cu;
        // 0x257120: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25711c) {
            ctx->pc = 0x257160u;
            goto label_257160;
        }
    }
    ctx->pc = 0x257124u;
    // 0x257124: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x257124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x257128: 0x24422020  addiu       $v0, $v0, 0x2020
    ctx->pc = 0x257128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8224));
    // 0x25712c: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x25712cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_257130:
    // 0x257130: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x257130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x257134: 0xad07001c  sw          $a3, 0x1C($t0)
    ctx->pc = 0x257134u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 7));
    // 0x257138: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x257138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25713c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x25713cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257140: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x257140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x257144: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x257144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x257148: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x257148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x25714c: 0xad050010  sw          $a1, 0x10($t0)
    ctx->pc = 0x25714cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 5));
    // 0x257150: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x257150u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
    // 0x257154: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x257154u;
    {
        const bool branch_taken_0x257154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257154u;
        // 0x257158: 0xad040018  sw          $a0, 0x18($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257154) {
            ctx->pc = 0x257228u;
            goto label_257228;
        }
    }
    ctx->pc = 0x25715Cu;
    // 0x25715c: 0x0  nop
    ctx->pc = 0x25715cu;
    // NOP
label_257160:
    // 0x257160: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x257160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x257164: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x257164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_257168:
    // 0x257168: 0xad02001c  sw          $v0, 0x1C($t0)
    ctx->pc = 0x257168u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 2));
    // 0x25716c: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x25716cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
    // 0x257170: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x257170u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
    // 0x257174: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x257174u;
    {
        const bool branch_taken_0x257174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257174u;
        // 0x257178: 0xad000014  sw          $zero, 0x14($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257174) {
            ctx->pc = 0x257228u;
            goto label_257228;
        }
    }
    ctx->pc = 0x25717Cu;
    // 0x25717c: 0x0  nop
    ctx->pc = 0x25717cu;
    // NOP
label_257180:
    // 0x257180: 0x22023  negu        $a0, $v0
    ctx->pc = 0x257180u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x257184: 0x2862001e  slti        $v0, $v1, 0x1E
    ctx->pc = 0x257184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x257188: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x257188u;
    {
        const bool branch_taken_0x257188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257188) {
            ctx->pc = 0x25718Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257188u;
            // 0x25718c: 0xad000038  sw          $zero, 0x38($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257228u;
            goto label_257228;
        }
    }
    ctx->pc = 0x257190u;
    // 0x257190: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x257190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x257194: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x257194u;
    {
        const bool branch_taken_0x257194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257194u;
        // 0x257198: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257194) {
            ctx->pc = 0x2571D0u;
            goto label_2571d0;
        }
    }
    ctx->pc = 0x25719Cu;
    // 0x25719c: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x25719cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2571a0: 0x54620021  bnel        $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2571A0u;
    {
        const bool branch_taken_0x2571a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2571a0) {
            ctx->pc = 0x2571A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2571A0u;
            // 0x2571a4: 0xad000038  sw          $zero, 0x38($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257228u;
            goto label_257228;
        }
    }
    ctx->pc = 0x2571A8u;
    // 0x2571a8: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x2571a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2571ac: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2571ACu;
    {
        const bool branch_taken_0x2571ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2571B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571ACu;
        // 0x2571b0: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2571ac) {
            ctx->pc = 0x2571BCu;
            goto label_2571bc;
        }
    }
    ctx->pc = 0x2571B4u;
    // 0x2571b4: 0x1482001d  bne         $a0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2571B4u;
    {
        const bool branch_taken_0x2571b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2571B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571B4u;
        // 0x2571b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2571b4) {
            ctx->pc = 0x25722Cu;
            goto label_25722c;
        }
    }
    ctx->pc = 0x2571BCu;
label_2571bc:
    // 0x2571bc: 0x824208b1  lb          $v0, 0x8B1($s2)
    ctx->pc = 0x2571bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2225)));
    // 0x2571c0: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2571C0u;
    {
        const bool branch_taken_0x2571c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2571C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571C0u;
        // 0x2571c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2571c0) {
            ctx->pc = 0x25722Cu;
            goto label_25722c;
        }
    }
    ctx->pc = 0x2571C8u;
    // 0x2571c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2571C8u;
    {
        const bool branch_taken_0x2571c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2571CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571C8u;
        // 0x2571cc: 0x26260054  addiu       $a2, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2571c8) {
            ctx->pc = 0x2571F4u;
            goto label_2571f4;
        }
    }
    ctx->pc = 0x2571D0u;
label_2571d0:
    // 0x2571d0: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2571D0u;
    {
        const bool branch_taken_0x2571d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2571D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571D0u;
        // 0x2571d4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2571d0) {
            ctx->pc = 0x2571E0u;
            goto label_2571e0;
        }
    }
    ctx->pc = 0x2571D8u;
    // 0x2571d8: 0x14820014  bne         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2571D8u;
    {
        const bool branch_taken_0x2571d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2571DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571D8u;
        // 0x2571dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2571d8) {
            ctx->pc = 0x25722Cu;
            goto label_25722c;
        }
    }
    ctx->pc = 0x2571E0u;
label_2571e0:
    // 0x2571e0: 0x824308b3  lb          $v1, 0x8B3($s2)
    ctx->pc = 0x2571e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2227)));
    // 0x2571e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2571e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2571e8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2571E8u;
    {
        const bool branch_taken_0x2571e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2571ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571E8u;
        // 0x2571ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2571e8) {
            ctx->pc = 0x25722Cu;
            goto label_25722c;
        }
    }
    ctx->pc = 0x2571F0u;
    // 0x2571f0: 0x26260054  addiu       $a2, $s1, 0x54
    ctx->pc = 0x2571f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_2571f4:
    // 0x2571f4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2571f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2571f8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2571f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2571fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2571fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x257200: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x257200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x257204: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x257204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x257208: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x257208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x25720c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x25720cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x257210: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x257210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x257214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257218: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x257218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x25721c: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x25721cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x257220: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x257220u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x257224: 0xad020038  sw          $v0, 0x38($t0)
    ctx->pc = 0x257224u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 2));
label_257228:
    // 0x257228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x257228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25722c:
    // 0x25722c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25722cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_257230:
    // 0x257230: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x257230u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257234: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x257234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x257238: 0x3e00008  jr          $ra
    ctx->pc = 0x257238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257238u;
        // 0x25723c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257240u;
}
