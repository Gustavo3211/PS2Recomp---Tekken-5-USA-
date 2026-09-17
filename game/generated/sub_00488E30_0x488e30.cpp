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

// Function: sub_00488E30
// Address: 0x488e30 - 0x488fa0
void sub_00488E30_0x488e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488E30_0x488e30");
#endif

    switch (ctx->pc) {
        case 0x488eb8u: goto label_488eb8;
        case 0x488edcu: goto label_488edc;
        case 0x488f18u: goto label_488f18;
        case 0x488f50u: goto label_488f50;
        default: break;
    }

    ctx->pc = 0x488e30u;

    // 0x488e30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x488e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x488e34: 0x3c02007c  lui         $v0, 0x7C
    ctx->pc = 0x488e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)124 << 16));
    // 0x488e38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x488e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x488e3c: 0x24475b14  addiu       $a3, $v0, 0x5B14
    ctx->pc = 0x488e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23316));
    // 0x488e40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x488e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x488e44: 0x3c03007c  lui         $v1, 0x7C
    ctx->pc = 0x488e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)124 << 16));
    // 0x488e48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x488e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x488e4c: 0x24665b08  addiu       $a2, $v1, 0x5B08
    ctx->pc = 0x488e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 23304));
    // 0x488e50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x488e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x488e54: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x488e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x488e58: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x488e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x488e5c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x488e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x488e60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x488e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x488e64: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x488e64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7C5B14u));
    // 0x488e68: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x488e68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7C5B08u));
    // 0x488e6c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x488e6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x488e70: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x488e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x488e74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x488e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x488e78: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x488e78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7C5B14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7C5B14u, _value); } while (0);
    // 0x488e7c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x488e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x488e80: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x488e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x488e84: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x488e84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x488e88: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x488e88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x488e8c: 0x440003a  bltz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x488E8Cu;
    {
        const bool branch_taken_0x488e8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x488E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488E8Cu;
        // 0x488e90: 0x3c02007c  lui         $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)124 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488e8c) {
            ctx->pc = 0x488F78u;
            goto label_488f78;
        }
    }
    ctx->pc = 0x488E94u;
    // 0x488e94: 0x3c03007c  lui         $v1, 0x7C
    ctx->pc = 0x488e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)124 << 16));
    // 0x488e98: 0x3c04007c  lui         $a0, 0x7C
    ctx->pc = 0x488e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)124 << 16));
    // 0x488e9c: 0x24555b00  addiu       $s5, $v0, 0x5B00
    ctx->pc = 0x488e9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 23296));
    // 0x488ea0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x488ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488ea4: 0x24745b18  addiu       $s4, $v1, 0x5B18
    ctx->pc = 0x488ea4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 23320));
    // 0x488ea8: 0x24935b0c  addiu       $s3, $a0, 0x5B0C
    ctx->pc = 0x488ea8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 23308));
    // 0x488eac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x488eacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488eb0: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x488eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x488eb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x488eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_488eb8:
    // 0x488eb8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x488eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x488ebc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x488ebcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x488ec0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x488ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x488ec4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x488ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x488ec8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x488ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x488ecc: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x488eccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x488ed0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x488ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x488ed4: 0xc13e654  jal         func_4F9950
    ctx->pc = 0x488ED4u;
    SET_GPR_U32(ctx, 31, 0x488EDCu);
    ctx->pc = 0x488ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488ED4u;
    // 0x488ed8: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9950u, 0x488ED4u, 0x488EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488EDCu;
label_488edc:
    // 0x488edc: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x488edcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x488ee0: 0x24424000  addiu       $v0, $v0, 0x4000
    ctx->pc = 0x488ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
    // 0x488ee4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x488ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x488ee8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x488ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x488eec: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x488eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x488ef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x488ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x488ef4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x488ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x488ef8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x488ef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x488efc: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x488efcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x488f00: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x488f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x488f04: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x488f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x488f08: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x488f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x488f0c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x488f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x488f10: 0xc122320  jal         func_488C80
    ctx->pc = 0x488F10u;
    SET_GPR_U32(ctx, 31, 0x488F18u);
    ctx->pc = 0x488F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488F10u;
    // 0x488f14: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488C80u, 0x488F10u, 0x488F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488F18u;
label_488f18:
    // 0x488f18: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x488f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x488f1c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x488f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x488f20: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x488f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x488f24: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x488f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x488f28: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x488f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x488f2c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x488f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x488f30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x488f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x488f34: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x488f34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x488f38: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x488f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x488f3c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x488f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x488f40: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x488f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x488f44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x488f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x488f48: 0xc122320  jal         func_488C80
    ctx->pc = 0x488F48u;
    SET_GPR_U32(ctx, 31, 0x488F50u);
    ctx->pc = 0x488F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488F48u;
    // 0x488f4c: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488C80u, 0x488F48u, 0x488F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488F50u;
label_488f50:
    // 0x488f50: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x488f50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x488f54: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x488f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x488f58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x488f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x488f5c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x488f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x488f60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x488f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x488f64: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x488f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x488f68: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x488f68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x488f6c: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x488f6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x488f70: 0x443ffd1  bgezl       $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x488F70u;
    {
        const bool branch_taken_0x488f70 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x488f70) {
            ctx->pc = 0x488F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x488F70u;
            // 0x488f74: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x488EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_488eb8;
        }
    }
    ctx->pc = 0x488F78u;
label_488f78:
    // 0x488f78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x488f78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488f7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x488f7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x488f80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x488f80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x488f84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x488f84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x488f88: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x488f88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x488f8c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x488f8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x488f90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x488f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x488f94: 0x3e00008  jr          $ra
    ctx->pc = 0x488F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488F94u;
        // 0x488f98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488F9Cu;
    // 0x488f9c: 0x0  nop
    ctx->pc = 0x488f9cu;
    // NOP
    ctx->pc = 0x488fa0u;
}
