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

// Function: sub_00304D40
// Address: 0x304d40 - 0x304f58
void sub_00304D40_0x304d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304D40_0x304d40");
#endif

    switch (ctx->pc) {
        case 0x304d70u: goto label_304d70;
        case 0x304d84u: goto label_304d84;
        case 0x304db0u: goto label_304db0;
        case 0x304edcu: goto label_304edc;
        default: break;
    }

    ctx->pc = 0x304d40u;

    // 0x304d40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x304d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x304d44: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x304d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x304d48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x304d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304d4c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x304d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x304d50: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x304d50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304d54: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x304d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x304d58: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x304d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x304d5c: 0x8e420894  lw          $v0, 0x894($s2)
    ctx->pc = 0x304d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
    // 0x304d60: 0x8c510020  lw          $s1, 0x20($v0)
    ctx->pc = 0x304d60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x304d64: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x304d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x304d68: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x304d68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x304d6c: 0x0  nop
    ctx->pc = 0x304d6cu;
    // NOP
label_304d70:
    // 0x304d70: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x304d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x304d74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x304d74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x304d78: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x304d78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x304d7c: 0xc0849c0  jal         func_212700
    ctx->pc = 0x304D7Cu;
    SET_GPR_U32(ctx, 31, 0x304D84u);
    ctx->pc = 0x304D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304D7Cu;
    // 0x304d80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x304D7Cu, 0x304D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304D84u;
label_304d84:
    // 0x304d84: 0x2a02001b  slti        $v0, $s0, 0x1B
    ctx->pc = 0x304d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x304d88: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x304D88u;
    {
        const bool branch_taken_0x304d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D88u;
        // 0x304d8c: 0x1020c0  sll         $a0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304d88) {
            ctx->pc = 0x304D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304d70;
        }
    }
    ctx->pc = 0x304D90u;
    // 0x304d90: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x304d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x304d94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x304d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x304d98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x304d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x304d9c: 0x244a23e8  addiu       $t2, $v0, 0x23E8
    ctx->pc = 0x304d9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 9192));
    // 0x304da0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x304da0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304da4: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x304da4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304da8: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x304da8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x304dac: 0x0  nop
    ctx->pc = 0x304dacu;
    // NOP
label_304db0:
    // 0x304db0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x304db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304db4: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x304db4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x304db8: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x304db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x304dbc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x304dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x304dc0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x304dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x304dc4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x304dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x304dc8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x304dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x304dcc: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x304dccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x304dd0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x304dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x304dd4: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x304dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x304dd8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x304dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x304ddc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x304ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x304de0: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x304de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x304de4: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x304de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x304de8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x304de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x304dec: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x304DECu;
    {
        const bool branch_taken_0x304dec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x304DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304DECu;
        // 0x304df0: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304dec) {
            ctx->pc = 0x304E08u;
            goto label_304e08;
        }
    }
    ctx->pc = 0x304DF4u;
    // 0x304df4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x304df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x304df8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x304df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x304dfc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x304dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x304e00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x304E00u;
    {
        const bool branch_taken_0x304e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E00u;
        // 0x304e04: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304e00) {
            ctx->pc = 0x304E24u;
            goto label_304e24;
        }
    }
    ctx->pc = 0x304E08u;
label_304e08:
    // 0x304e08: 0x8e420894  lw          $v0, 0x894($s2)
    ctx->pc = 0x304e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
    // 0x304e0c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x304e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x304e10: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x304e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x304e14: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x304e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x304e18: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x304e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x304e1c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x304e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x304e20: 0xac640080  sw          $a0, 0x80($v1)
    ctx->pc = 0x304e20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 4));
label_304e24:
    // 0x304e24: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x304e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304e28: 0x92040  sll         $a0, $t1, 1
    ctx->pc = 0x304e28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x304e2c: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x304e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x304e30: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x304e30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x304e34: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x304e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x304e38: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x304e38u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x304e3c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x304e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x304e40: 0x8c3021  addu        $a2, $a0, $t4
    ctx->pc = 0x304e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x304e44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x304e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x304e48: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x304e48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x304e4c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x304e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x304e50: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x304e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x304e54: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x304e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304e58: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x304e58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x304e5c: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x304e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x304e60: 0x29280017  slti        $t0, $t1, 0x17
    ctx->pc = 0x304e60u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x304e64: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x304e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x304e68: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x304e68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x304e6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x304e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304e70: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x304e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x304e74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x304e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x304e78: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x304e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x304e7c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x304e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304e80: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x304e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x304e84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x304e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304e88: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x304e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x304e8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x304e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x304e90: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x304e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x304e94: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x304e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304e98: 0xe4a1003c  swc1        $f1, 0x3C($a1)
    ctx->pc = 0x304e98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x304e9c: 0x1500ffc4  bnez        $t0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x304E9Cu;
    {
        const bool branch_taken_0x304e9c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x304EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E9Cu;
        // 0x304ea0: 0xe4a00038  swc1        $f0, 0x38($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304e9c) {
            ctx->pc = 0x304DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304db0;
        }
    }
    ctx->pc = 0x304EA4u;
    // 0x304ea4: 0x26230900  addiu       $v1, $s1, 0x900
    ctx->pc = 0x304ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2304));
    // 0x304ea8: 0x26250b40  addiu       $a1, $s1, 0xB40
    ctx->pc = 0x304ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2880));
    // 0x304eac: 0x26260bd0  addiu       $a2, $s1, 0xBD0
    ctx->pc = 0x304eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 3024));
    // 0x304eb0: 0x26220240  addiu       $v0, $s1, 0x240
    ctx->pc = 0x304eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    // 0x304eb4: 0x26240990  addiu       $a0, $s1, 0x990
    ctx->pc = 0x304eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2448));
    // 0x304eb8: 0xae230d70  sw          $v1, 0xD70($s1)
    ctx->pc = 0x304eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3440), GPR_U32(ctx, 3));
    // 0x304ebc: 0xae250e90  sw          $a1, 0xE90($s1)
    ctx->pc = 0x304ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3728), GPR_U32(ctx, 5));
    // 0x304ec0: 0xae260f20  sw          $a2, 0xF20($s1)
    ctx->pc = 0x304ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3872), GPR_U32(ctx, 6));
    // 0x304ec4: 0xae220ce0  sw          $v0, 0xCE0($s1)
    ctx->pc = 0x304ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3296), GPR_U32(ctx, 2));
    // 0x304ec8: 0xae240e00  sw          $a0, 0xE00($s1)
    ctx->pc = 0x304ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3584), GPR_U32(ctx, 4));
    // 0x304ecc: 0xae310110  sw          $s1, 0x110($s1)
    ctx->pc = 0x304eccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 17));
    // 0x304ed0: 0xae3107d0  sw          $s1, 0x7D0($s1)
    ctx->pc = 0x304ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2000), GPR_U32(ctx, 17));
    // 0x304ed4: 0xc0863a4  jal         func_218E90
    ctx->pc = 0x304ED4u;
    SET_GPR_U32(ctx, 31, 0x304EDCu);
    ctx->pc = 0x304ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304ED4u;
    // 0x304ed8: 0x86440042  lh          $a0, 0x42($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E90u, 0x304ED4u, 0x304EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304EDCu;
label_304edc:
    // 0x304edc: 0xc64206c0  lwc1        $f2, 0x6C0($s2)
    ctx->pc = 0x304edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304ee0: 0x86430042  lh          $v1, 0x42($s2)
    ctx->pc = 0x304ee0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
    // 0x304ee4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x304ee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304ee8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x304ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x304eec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x304eecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x304ef0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x304ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x304ef4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x304ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x304ef8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x304ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x304efc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x304efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x304f00: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x304f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x304f04: 0x24212028  addiu       $at, $at, 0x2028
    ctx->pc = 0x304f04u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 8232));
    // 0x304f08: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x304f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x304f0c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x304f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304f10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x304f10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x304f14: 0xe6200c98  swc1        $f0, 0xC98($s1)
    ctx->pc = 0x304f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3224), bits); }
    // 0x304f18: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x304f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304f1c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x304f1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x304f20: 0xe6210d20  swc1        $f1, 0xD20($s1)
    ctx->pc = 0x304f20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3360), bits); }
    // 0x304f24: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x304f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304f28: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x304f28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x304f2c: 0xe6200db4  swc1        $f0, 0xDB4($s1)
    ctx->pc = 0x304f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3508), bits); }
    // 0x304f30: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x304f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304f34: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x304f34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x304f38: 0xe6210e40  swc1        $f1, 0xE40($s1)
    ctx->pc = 0x304f38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3648), bits); }
    // 0x304f3c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x304f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304f40: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x304f40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x304f44: 0xe6200ed4  swc1        $f0, 0xED4($s1)
    ctx->pc = 0x304f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3796), bits); }
    // 0x304f48: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x304f48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x304F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F4Cu;
        // 0x304f50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304F54u;
    // 0x304f54: 0x0  nop
    ctx->pc = 0x304f54u;
    // NOP
    ctx->pc = 0x304f58u;
}
