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

// Function: sub_004C3E60
// Address: 0x4c3e60 - 0x4c3f40
void sub_004C3E60_0x4c3e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C3E60_0x4c3e60");
#endif

    switch (ctx->pc) {
        case 0x4c3e8cu: goto label_4c3e8c;
        default: break;
    }

    ctx->pc = 0x4c3e60u;

    // 0x4c3e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c3e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c3e64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c3e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c3e68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c3e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c3e6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c3e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c3e70: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4c3e70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4c3e74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c3e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c3e78: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4c3e78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c3e7c: 0x442000b  bltzl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4C3E7Cu;
    {
        const bool branch_taken_0x4c3e7c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4c3e7c) {
            ctx->pc = 0x4C3E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3E7Cu;
            // 0x4c3e80: 0x8e0a0140  lw          $t2, 0x140($s0) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3EACu;
            goto label_4c3eac;
        }
    }
    ctx->pc = 0x4C3E84u;
    // 0x4c3e84: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4C3E84u;
    SET_GPR_U32(ctx, 31, 0x4C3E8Cu);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4C3E84u, 0x4C3E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3E8Cu;
label_4c3e8c:
    // 0x4c3e8c: 0x24020416  addiu       $v0, $zero, 0x416
    ctx->pc = 0x4c3e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1046));
    // 0x4c3e90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c3e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c3e94: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4c3e94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c3e98: 0xa60301b6  sh          $v1, 0x1B6($s0)
    ctx->pc = 0x4c3e98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c3e9c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4c3e9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c3ea0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4c3ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4c3ea4: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4c3ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c3ea8: 0x8e0a0140  lw          $t2, 0x140($s0)
    ctx->pc = 0x4c3ea8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_4c3eac:
    // 0x4c3eac: 0x854201b4  lh          $v0, 0x1B4($t2)
    ctx->pc = 0x4c3eacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 436)));
    // 0x4c3eb0: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4C3EB0u;
    {
        const bool branch_taken_0x4c3eb0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C3EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3EB0u;
        // 0x4c3eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3eb0) {
            ctx->pc = 0x4C3ED0u;
            goto label_4c3ed0;
        }
    }
    ctx->pc = 0x4C3EB8u;
    // 0x4c3eb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c3eb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c3ebc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c3ebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c3ec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c3ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c3ec4: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4C3EC4u;
    ctx->pc = 0x4C3EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3EC4u;
    // 0x4c3ec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4C3ECCu;
    // 0x4c3ecc: 0x0  nop
    ctx->pc = 0x4c3eccu;
    // NOP
label_4c3ed0:
    // 0x4c3ed0: 0x8d430010  lw          $v1, 0x10($t2)
    ctx->pc = 0x4c3ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x4c3ed4: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x4c3ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4c3ed8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c3ed8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c3edc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c3edcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4c3ee0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4c3ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4c3ee4: 0x26070014  addiu       $a3, $s0, 0x14
    ctx->pc = 0x4c3ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4c3ee8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c3ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4c3eec: 0x26080018  addiu       $t0, $s0, 0x18
    ctx->pc = 0x4c3eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4c3ef0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4c3ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4c3ef4: 0x2609011c  addiu       $t1, $s0, 0x11C
    ctx->pc = 0x4c3ef4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
    // 0x4c3ef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c3ef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c3efc: 0x8d430014  lw          $v1, 0x14($t2)
    ctx->pc = 0x4c3efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x4c3f00: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4c3f00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c3f04: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4c3f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4c3f08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c3f08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c3f0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4c3f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4c3f10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c3f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c3f14: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4c3f14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4c3f18: 0x8d430018  lw          $v1, 0x18($t2)
    ctx->pc = 0x4c3f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x4c3f1c: 0x95050000  lhu         $a1, 0x0($t0)
    ctx->pc = 0x4c3f1cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c3f20: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4c3f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4c3f24: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4c3f24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4c3f28: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4c3f28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4c3f2c: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4c3f2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c3f30: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x4c3f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x4c3f34: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4c3f34u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c3f38: 0x8127e84  j           func_49FA10
    ctx->pc = 0x4C3F38u;
    ctx->pc = 0x4C3F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3F38u;
    // 0x4c3f3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    sub_0049FA10_0x49fa10(rdram, ctx, runtime); return;
    ctx->pc = 0x4C3F40u;
}
