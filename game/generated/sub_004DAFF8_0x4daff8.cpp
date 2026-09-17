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

// Function: sub_004DAFF8
// Address: 0x4daff8 - 0x4db0d0
void sub_004DAFF8_0x4daff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAFF8_0x4daff8");
#endif

    switch (ctx->pc) {
        case 0x4db010u: goto label_4db010;
        case 0x4db030u: goto label_4db030;
        default: break;
    }

    ctx->pc = 0x4daff8u;

    // 0x4daff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4daff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4daffc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4daffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4db000: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4db000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4db004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4db004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4db008: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4DB008u;
    SET_GPR_U32(ctx, 31, 0x4DB010u);
    ctx->pc = 0x4DB00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB008u;
    // 0x4db00c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4DB008u, 0x4DB010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB010u;
label_4db010:
    // 0x4db010: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4db010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4db014: 0x263001b4  addiu       $s0, $s1, 0x1B4
    ctx->pc = 0x4db014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    // 0x4db018: 0xac62111c  sw          $v0, 0x111C($v1)
    ctx->pc = 0x4db018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F111Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F111Cu, _value); } while (0);
    // 0x4db01c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4db01cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4db020: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4DB020u;
    {
        const bool branch_taken_0x4db020 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4DB024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB020u;
        // 0x4db024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db020) {
            ctx->pc = 0x4DB044u;
            goto label_4db044;
        }
    }
    ctx->pc = 0x4DB028u;
    // 0x4db028: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4DB028u;
    SET_GPR_U32(ctx, 31, 0x4DB030u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4DB028u, 0x4DB030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB030u;
label_4db030:
    // 0x4db030: 0xa6200030  sh          $zero, 0x30($s1)
    ctx->pc = 0x4db030u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x4db034: 0xa62001b6  sh          $zero, 0x1B6($s1)
    ctx->pc = 0x4db034u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4db038: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4db038u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4db03c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4db03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4db040: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4db040u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_4db044:
    // 0x4db044: 0x8e250140  lw          $a1, 0x140($s1)
    ctx->pc = 0x4db044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x4db048: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4db048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4db04c: 0xac451118  sw          $a1, 0x1118($v0)
    ctx->pc = 0x4db04cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7F1118u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1118u, _value); } while (0);
    // 0x4db050: 0x84a301b4  lh          $v1, 0x1B4($a1)
    ctx->pc = 0x4db050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 436)));
    // 0x4db054: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DB054u;
    {
        const bool branch_taken_0x4db054 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4DB058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB054u;
        // 0x4db058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db054) {
            ctx->pc = 0x4DB070u;
            goto label_4db070;
        }
    }
    ctx->pc = 0x4DB05Cu;
    // 0x4db05c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4db05cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4db060: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4db060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db064: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4db064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4db068: 0x8136dc6  j           func_4DB718
    ctx->pc = 0x4DB068u;
    ctx->pc = 0x4DB06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB068u;
    // 0x4db06c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB718u, 0x4DB068u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DB070u;
label_4db070:
    // 0x4db070: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4db070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4db074: 0x84a5016a  lh          $a1, 0x16A($a1)
    ctx->pc = 0x4db074u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 362)));
    // 0x4db078: 0x248410fc  addiu       $a0, $a0, 0x10FC
    ctx->pc = 0x4db078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4348));
    // 0x4db07c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4db07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4db080: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4db080u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F10FCu));
    // 0x4db084: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4db084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4db088: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4db088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4db08c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4db08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4db090: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4db090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4db094: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4db094u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4db098: 0x9622016a  lhu         $v0, 0x16A($s1)
    ctx->pc = 0x4db098u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 362)));
    // 0x4db09c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x4db09cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4db0a0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4DB0A0u;
    {
        const bool branch_taken_0x4db0a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB0A0u;
        // 0x4db0a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db0a0) {
            ctx->pc = 0x4DB0C0u;
            goto label_4db0c0;
        }
    }
    ctx->pc = 0x4DB0A8u;
    // 0x4db0a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4db0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db0ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4db0acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4db0b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4db0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4db0b4: 0x8136dc6  j           func_4DB718
    ctx->pc = 0x4DB0B4u;
    ctx->pc = 0x4DB0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB0B4u;
    // 0x4db0b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB718u, 0x4DB0B4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DB0BCu;
    // 0x4db0bc: 0x0  nop
    ctx->pc = 0x4db0bcu;
    // NOP
label_4db0c0:
    // 0x4db0c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4db0c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4db0c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4db0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4db0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB0C8u;
        // 0x4db0cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB0D0u;
}
