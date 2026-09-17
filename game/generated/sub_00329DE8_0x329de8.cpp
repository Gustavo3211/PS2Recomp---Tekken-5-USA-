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

// Function: sub_00329DE8
// Address: 0x329de8 - 0x329f28
void sub_00329DE8_0x329de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329DE8_0x329de8");
#endif

    switch (ctx->pc) {
        case 0x329de8u: goto label_329de8;
        case 0x329decu: goto label_329dec;
        case 0x329df0u: goto label_329df0;
        case 0x329df4u: goto label_329df4;
        case 0x329df8u: goto label_329df8;
        case 0x329dfcu: goto label_329dfc;
        case 0x329e00u: goto label_329e00;
        case 0x329e04u: goto label_329e04;
        case 0x329e08u: goto label_329e08;
        case 0x329e0cu: goto label_329e0c;
        case 0x329e10u: goto label_329e10;
        case 0x329e14u: goto label_329e14;
        case 0x329e18u: goto label_329e18;
        case 0x329e1cu: goto label_329e1c;
        case 0x329e20u: goto label_329e20;
        case 0x329e24u: goto label_329e24;
        case 0x329e28u: goto label_329e28;
        case 0x329e2cu: goto label_329e2c;
        case 0x329e30u: goto label_329e30;
        case 0x329e34u: goto label_329e34;
        case 0x329e38u: goto label_329e38;
        case 0x329e3cu: goto label_329e3c;
        case 0x329e40u: goto label_329e40;
        case 0x329e44u: goto label_329e44;
        case 0x329e48u: goto label_329e48;
        case 0x329e4cu: goto label_329e4c;
        case 0x329e50u: goto label_329e50;
        case 0x329e54u: goto label_329e54;
        case 0x329e58u: goto label_329e58;
        case 0x329e5cu: goto label_329e5c;
        case 0x329e60u: goto label_329e60;
        case 0x329e64u: goto label_329e64;
        case 0x329e68u: goto label_329e68;
        case 0x329e6cu: goto label_329e6c;
        case 0x329e70u: goto label_329e70;
        case 0x329e74u: goto label_329e74;
        case 0x329e78u: goto label_329e78;
        case 0x329e7cu: goto label_329e7c;
        case 0x329e80u: goto label_329e80;
        case 0x329e84u: goto label_329e84;
        case 0x329e88u: goto label_329e88;
        case 0x329e8cu: goto label_329e8c;
        case 0x329e90u: goto label_329e90;
        case 0x329e94u: goto label_329e94;
        case 0x329e98u: goto label_329e98;
        case 0x329e9cu: goto label_329e9c;
        case 0x329ea0u: goto label_329ea0;
        case 0x329ea4u: goto label_329ea4;
        case 0x329ea8u: goto label_329ea8;
        case 0x329eacu: goto label_329eac;
        case 0x329eb0u: goto label_329eb0;
        case 0x329eb4u: goto label_329eb4;
        case 0x329eb8u: goto label_329eb8;
        case 0x329ebcu: goto label_329ebc;
        case 0x329ec0u: goto label_329ec0;
        case 0x329ec4u: goto label_329ec4;
        case 0x329ec8u: goto label_329ec8;
        case 0x329eccu: goto label_329ecc;
        case 0x329ed0u: goto label_329ed0;
        case 0x329ed4u: goto label_329ed4;
        case 0x329ed8u: goto label_329ed8;
        case 0x329edcu: goto label_329edc;
        case 0x329ee0u: goto label_329ee0;
        case 0x329ee4u: goto label_329ee4;
        case 0x329ee8u: goto label_329ee8;
        case 0x329eecu: goto label_329eec;
        case 0x329ef0u: goto label_329ef0;
        case 0x329ef4u: goto label_329ef4;
        case 0x329ef8u: goto label_329ef8;
        case 0x329efcu: goto label_329efc;
        case 0x329f00u: goto label_329f00;
        case 0x329f04u: goto label_329f04;
        case 0x329f08u: goto label_329f08;
        case 0x329f0cu: goto label_329f0c;
        case 0x329f10u: goto label_329f10;
        case 0x329f14u: goto label_329f14;
        case 0x329f18u: goto label_329f18;
        case 0x329f1cu: goto label_329f1c;
        case 0x329f20u: goto label_329f20;
        case 0x329f24u: goto label_329f24;
        default: break;
    }

    ctx->pc = 0x329de8u;

label_329de8:
    // 0x329de8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_329dec:
    // 0x329dec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x329decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_329df0:
    // 0x329df0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x329df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_329df4:
    // 0x329df4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x329df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_329df8:
    // 0x329df8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x329df8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_329dfc:
    // 0x329dfc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x329dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_329e00:
    // 0x329e00: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x329e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_329e04:
    // 0x329e04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x329e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_329e08:
    // 0x329e08: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x329e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_329e0c:
    // 0x329e0c: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x329e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_329e10:
    // 0x329e10: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x329e10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_329e14:
    // 0x329e14: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x329e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_329e18:
    // 0x329e18: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x329e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_329e1c:
    // 0x329e1c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x329e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_329e20:
    // 0x329e20: 0xc60d000c  lwc1        $f13, 0xC($s0)
    ctx->pc = 0x329e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_329e24:
    // 0x329e24: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x329e24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_329e28:
    // 0x329e28: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x329e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_329e2c:
    // 0x329e2c: 0xc60e0010  lwc1        $f14, 0x10($s0)
    ctx->pc = 0x329e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_329e30:
    // 0x329e30: 0x40f809  jalr        $v0
label_329e34:
    if (ctx->pc == 0x329E34u) {
        ctx->pc = 0x329E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E30u;
        // 0x329e34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E38u;
        goto label_329e38;
    }
    ctx->pc = 0x329E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x329E38u);
        ctx->pc = 0x329E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E30u;
        // 0x329e34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329E30u, 0x329E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329E38u;
label_329e38:
    // 0x329e38: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x329e38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_329e3c:
    // 0x329e3c: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x329e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_329e40:
    // 0x329e40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x329e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329e44:
    // 0x329e44: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x329e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_329e48:
    // 0x329e48: 0xc60d0018  lwc1        $f13, 0x18($s0)
    ctx->pc = 0x329e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_329e4c:
    // 0x329e4c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x329e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_329e50:
    // 0x329e50: 0xc60e001c  lwc1        $f14, 0x1C($s0)
    ctx->pc = 0x329e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_329e54:
    // 0x329e54: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x329e54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_329e58:
    // 0x329e58: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x329e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_329e5c:
    // 0x329e5c: 0x60f809  jalr        $v1
label_329e60:
    if (ctx->pc == 0x329E60u) {
        ctx->pc = 0x329E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E5Cu;
        // 0x329e60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E64u;
        goto label_329e64;
    }
    ctx->pc = 0x329E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x329E64u);
        ctx->pc = 0x329E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E5Cu;
        // 0x329e60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329E5Cu, 0x329E64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329E64u;
label_329e64:
    // 0x329e64: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x329e64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_329e68:
    // 0x329e68: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x329e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_329e6c:
    // 0x329e6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x329e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329e70:
    // 0x329e70: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x329e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_329e74:
    // 0x329e74: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x329e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_329e78:
    // 0x329e78: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x329e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_329e7c:
    // 0x329e7c: 0xc60e0028  lwc1        $f14, 0x28($s0)
    ctx->pc = 0x329e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_329e80:
    // 0x329e80: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x329e80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_329e84:
    // 0x329e84: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x329e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_329e88:
    // 0x329e88: 0x60f809  jalr        $v1
label_329e8c:
    if (ctx->pc == 0x329E8Cu) {
        ctx->pc = 0x329E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E88u;
        // 0x329e8c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E90u;
        goto label_329e90;
    }
    ctx->pc = 0x329E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x329E90u);
        ctx->pc = 0x329E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E88u;
        // 0x329e8c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329E88u, 0x329E90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329E90u;
label_329e90:
    // 0x329e90: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x329e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_329e94:
    // 0x329e94: 0xc60e0038  lwc1        $f14, 0x38($s0)
    ctx->pc = 0x329e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_329e98:
    // 0x329e98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x329e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329e9c:
    // 0x329e9c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x329e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_329ea0:
    // 0x329ea0: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x329ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_329ea4:
    // 0x329ea4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x329ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_329ea8:
    // 0x329ea8: 0xc60d0034  lwc1        $f13, 0x34($s0)
    ctx->pc = 0x329ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_329eac:
    // 0x329eac: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x329eacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_329eb0:
    // 0x329eb0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x329eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_329eb4:
    // 0x329eb4: 0x60f809  jalr        $v1
label_329eb8:
    if (ctx->pc == 0x329EB8u) {
        ctx->pc = 0x329EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329EB4u;
        // 0x329eb8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329EBCu;
        goto label_329ebc;
    }
    ctx->pc = 0x329EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x329EBCu);
        ctx->pc = 0x329EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329EB4u;
        // 0x329eb8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329EB4u, 0x329EBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329EBCu;
label_329ebc:
    // 0x329ebc: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x329ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_329ec0:
    // 0x329ec0: 0xc60c0040  lwc1        $f12, 0x40($s0)
    ctx->pc = 0x329ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_329ec4:
    // 0x329ec4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x329ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329ec8:
    // 0x329ec8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x329ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_329ecc:
    // 0x329ecc: 0xc60d0044  lwc1        $f13, 0x44($s0)
    ctx->pc = 0x329eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_329ed0:
    // 0x329ed0: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x329ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_329ed4:
    // 0x329ed4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x329ed4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_329ed8:
    // 0x329ed8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x329ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_329edc:
    // 0x329edc: 0x60f809  jalr        $v1
label_329ee0:
    if (ctx->pc == 0x329EE0u) {
        ctx->pc = 0x329EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329EDCu;
        // 0x329ee0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329EE4u;
        goto label_329ee4;
    }
    ctx->pc = 0x329EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x329EE4u);
        ctx->pc = 0x329EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329EDCu;
        // 0x329ee0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329EDCu, 0x329EE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329EE4u;
label_329ee4:
    // 0x329ee4: 0x8e290024  lw          $t1, 0x24($s1)
    ctx->pc = 0x329ee4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_329ee8:
    // 0x329ee8: 0x8e080050  lw          $t0, 0x50($s0)
    ctx->pc = 0x329ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_329eec:
    // 0x329eec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x329eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329ef0:
    // 0x329ef0: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x329ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_329ef4:
    // 0x329ef4: 0x8e060048  lw          $a2, 0x48($s0)
    ctx->pc = 0x329ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_329ef8:
    // 0x329ef8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x329ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_329efc:
    // 0x329efc: 0x8e07004c  lw          $a3, 0x4C($s0)
    ctx->pc = 0x329efcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_329f00:
    // 0x329f00: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x329f00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_329f04:
    // 0x329f04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x329f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_329f08:
    // 0x329f08: 0x60f809  jalr        $v1
label_329f0c:
    if (ctx->pc == 0x329F0Cu) {
        ctx->pc = 0x329F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F08u;
        // 0x329f0c: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F10u;
        goto label_329f10;
    }
    ctx->pc = 0x329F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x329F10u);
        ctx->pc = 0x329F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F08u;
        // 0x329f0c: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329F08u, 0x329F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329F10u;
label_329f10:
    // 0x329f10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_329f14:
    // 0x329f14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329f14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_329f18:
    // 0x329f18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x329f18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_329f1c:
    // 0x329f1c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x329f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_329f20:
    // 0x329f20: 0x3e00008  jr          $ra
label_329f24:
    if (ctx->pc == 0x329F24u) {
        ctx->pc = 0x329F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F20u;
        // 0x329f24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329F28u;
        goto label_fallthrough_0x329f20;
    }
    ctx->pc = 0x329F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F20u;
        // 0x329f24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x329f20:
    ctx->pc = 0x329F28u;
}
